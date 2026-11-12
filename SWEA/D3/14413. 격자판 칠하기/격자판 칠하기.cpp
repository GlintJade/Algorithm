#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;
        
        char board[55][55];
        queue<pair<int, int>> q;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                cin >> board[i][j];
                if (board[i][j] != '?') {
                    q.push({ i, j });
                }
            }
        }

        string answer = "possible";
        while (!q.empty()) {
            auto front = q.front(); q.pop();
            int X = front.first;
            int Y = front.second;
            char tmp = board[X][Y];
            char tmp2 = board[X][Y] == '#' ? '.' : '#'; //반대되는 것
            bool check = false;
            for (int dir = 0; dir < 4; dir++) {
                int nx = X + dx[dir];
                int ny = Y + dy[dir];
                if (nx < 1 || ny < 1 || nx > N || ny > M) continue;
                if (board[nx][ny] == '?') {
                    board[nx][ny] = tmp2;
                    q.push({ nx, ny });
                }
                if (board[nx][ny] == tmp) {
                    answer = "impossible";
                    check = true;
                    break;
                }
            }
            if (check) break;
        }

        cout << "#" << test_case << ' ' <<answer << '\n';
        
    }
    return 0;
}