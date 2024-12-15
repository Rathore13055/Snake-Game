#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameover;
const int width = 20;
const int height = 20;
int x, y, fr_x, fr_y, score;
enum edirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
edirection dir;

void setup() {
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fr_x = rand() % width;
    fr_y = rand() % height;
    score = 0;
}

void draw() {
    system("cls");
    for (int i = 0; i < width + 2; i++) {
        cout << "*";
    }
    cout << "\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) {
                cout << "*";
            }
            if (i == y && j == x) {
                cout << "O";
            } else if (i == fr_y && j == fr_x) {
                cout << "F";
            } else {
                bool isBorder = (j == width - 1);
                if (isBorder) {
                    cout << " ";
                } else {
                    cout << " ";
                }
            }
            if (j == width - 1) {
                cout << "*";
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < width + 2; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << "Score: " << score << "\n";
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameover = true;
                break;
        }
    }
}

void logic() {
    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= width || x < 0 || y >= height || y < 0) {
        gameover = true;
    }

    if (x == fr_x && y == fr_y) {
        score += 10;
        fr_x = rand() % width;
        fr_y = rand() % height;
    }
}

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
        Sleep(100);
    }
    return 0;
}
