#include <bits/stdc++.h>
using namespace std;

int N;
char board[25][25];
queue<pair<int, int>> q;
int dx[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[8] = { 1, 0, -1, 0, 1, -1, 1, -1 };

bool func() {
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 8; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            int cnt = 1;
            while (true) {
                if (nx < 0 || ny < 0 || nx >= N || ny >= N) break; //탐색이 맵 바깥일 때
                if (board[nx][ny] == '.') break; //돌이 없는 곳을 만났을 때
                cnt++;
                nx += dx[dir];
                ny += dy[dir];
            }
            if (cnt >= 5) return true;
        }
    }
    return false;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> N;
        memset(board, 0, sizeof(board));
        while (!q.empty()) q.pop();
        string s;
        for (int i = 0; i < N; i++) {
            cin >> s;
            int j = 0;
            for (char c : s) {
                board[i][j] = c;
                if (c == 'o') q.push({ i,j });
                j++;
            }
        }

        string answer = func() ? "YES" : "NO";

        cout << "#" << test_case << ' ' << answer << '\n';
    }

    return 0;
}