#include <bits/stdc++.h>
using namespace std;

int N, M;
int board[10][10];
int dx[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[8] = { 1, 0, -1, 0, 1, -1, 1, -1 };

void func(int x, int y, int color) {
    board[x][y] = color;
    for (int dir = 0; dir < 8; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        while (true) {
            if (nx < 1 || ny < 1 || nx > N || ny > N) break; //탐색이 보드 밖으로 나갈 때
            if (board[nx][ny] == 0) break; //빈 칸일 때

            if (board[nx][ny] == color) { //내 돌을 만났을 때
                int xx = x + dx[dir];
                int yy = y + dy[dir];
                while (xx != nx || yy != ny) {
                    board[xx][yy] = color;
                    xx += dx[dir];
                    yy += dy[dir];
                }
                break;
            }
            nx += dx[dir];
            ny += dy[dir];
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> N >> M; // N : 보드의 한 변의 길이 N x N

        memset(board, 0, sizeof(board));
        board[N / 2][N / 2] = 2, board[N/2+1][N/2+1] = 2;
        board[N / 2 + 1][N / 2] = 1, board[N / 2][N / 2 + 1] = 1;

        int x, y, color;
        for (int i = 0; i < M; i++) {
            cin >> x >> y >> color; // (x, y)에 color(1 : 흑, 2 : 백) 놓기.
            func(x, y, color);
        }

        int black = 0, white = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (board[i][j] == 1) black++;
                else if (board[i][j] == 2) white++;
            }
        }

        cout << "#" << test_case << ' ' << black << ' ' << white<< '\n';

    }

    return 0;
}