#include <bits/stdc++.h>
using namespace std;

int H, W;
int dx[4] = { 0, 1, 0, -1 }; //동남서북 > v < ^
int dy[4] = { 1, 0, -1, 0 };
char direction[4] = { '>', 'v', '<', '^' };

bool isOut(int x, int y) {
    return (x < 0 || x >= H || y < 0 || y >= W) ? true : false;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> H >> W;

        char board[25][25]; //보드
        int x, y; // 현재 전차의 위치
        
        int dir; //현재 전차의 방향
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> board[i][j];
                if (board[i][j] == '>' || board[i][j] == '<' || board[i][j] == '^' || board[i][j] == 'v') {
                    x = i, y = j;
                    for (int k = 0; k < 4; k++) if (board[i][j] == direction[k]) dir = k;
                }
            }
        }

        int N;
        cin >> N;

        char command;
        for (int i = 0; i < N; i++) {
            cin >> command;
            if (command == 'R') dir = 0;
            else if (command == 'D') dir = 1;
            else if (command == 'L') dir = 2;
            else if (command == 'U') dir = 3;

            if (command == 'S') {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                while (!isOut(nx, ny)) {
                    if (board[nx][ny] == '#') break;
                    if (board[nx][ny] == '*') {
                        board[nx][ny] = '.';
                        break;
                    }
                    nx += dx[dir];
                    ny += dy[dir];
                }
            }
            else { // R, D, L, U 인 경우
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                board[x][y] = direction[dir];
                if (!isOut(nx, ny) && board[nx][ny] == '.') {
                    board[x][y] = '.';
                    x = nx;
                    y = ny;
                    board[x][y] = direction[dir];
                }
            }

        }

        cout << "#" << test_case << ' ';
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cout << board[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}