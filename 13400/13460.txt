#include <iostream>
using namespace std;
char board[10][10];
int minc = 11;
void sol(int dir, int rx, int ry, int bx, int by, int count) {
    int rrx = rx, rry = ry, bbx = bx, bby = by;
    if (count > 10) {
        return;
    }
    if (dir == 1) {
        bool a = 0;
        if (ry > by) {
            a = 1;
        }
        while (board[ry][rx] == '.') {
            ry--;
        }
        while (board[by][bx] == '.') {
            by--;
        }
        if (board[by][bx] == '#') {
            by++;
        }
        if (board[ry][rx] == '#') {
            ry++;
        }
        if (ry == by && rx==bx) {
            if (board[ry][rx] == 'O') {
                return;
            }
            a ? ry++ : by++;
        }
    }
    else if (dir == 2) {
        bool a = 0;
        if (rx > bx) {
            a = 1;
        }
        while (board[ry][rx] == '.') {
            rx++;
        }
        while (board[by][bx] == '.') {
            bx++;
        }
        if (board[by][bx] == '#') {
            bx--;
        }
        if (board[ry][rx] == '#') {
            rx--;
        }
        if (ry == by && rx == bx) {
            if (board[ry][rx] == 'O') {
                return;
            }
            a ? bx-- : rx--;
        }
    }
    else if (dir == 3) {
        bool a = 0;
        if (ry > by) {
            a = 1;
        }
        while (board[ry][rx] == '.') {
            ry++;
        }
        while (board[by][bx] == '.') {
            by++;
        }
        if (board[by][bx] == '#') {
            by--;
        }
        if (board[ry][rx] == '#') {
            ry--;
        }
        if (ry == by && rx == bx) {
            if (board[ry][rx] == 'O') {
                return;
            }
            a ? by-- : ry--;
        }
    }
    else {
        bool a = 0;
        if (rx > bx) {
            a = 1;
        }
        while (board[ry][rx] == '.') {
            rx--;
        }
        while (board[by][bx] == '.') {
            bx--;
        }
        if (board[by][bx] == '#') {
            bx++;
        }
        if (board[ry][rx] == '#') {
            rx++;
        }
        if (ry == by && rx == bx) {
            if (board[ry][rx] == 'O') {
                return;
            }
            a ? rx++ : bx++;
        }
    }
    if (rrx == rx && rry == ry && bbx == bx && bby == by) {
        return;
    }
    if (board[ry][rx] == 'O') {
        minc = minc < count ? minc : count;
        return;
    }
    if (board[by][bx] == 'O') {
        return;
    }
    sol(1, rx, ry, bx, by, count + 1);
    sol(2, rx, ry, bx, by, count + 1);
    sol(3, rx, ry, bx, by, count + 1);
    sol(4, rx, ry, bx, by, count + 1);
}
int main()
{
    int c, b, rx, ry, bx, by;
    scanf_s("%d %d", &c, &b);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < b; j++) {
            cin>> board[i][j];
            if (board[i][j] == 'R') {
                rx = j;
                ry = i;
                board[i][j] = '.';
            }
            if (board[i][j] == 'B') {
                bx = j;
                by = i;
                board[i][j] = '.';
            }
        }
    }
    sol(1, rx, ry, bx, by, 1);
    sol(2, rx, ry, bx, by, 1);
    sol(3, rx, ry, bx, by, 1);
    sol(4, rx, ry, bx, by, 1);
    if (minc == 11) {
        printf("-1");
        return 0;
    }
    printf("%d", minc);
    return 0;
}