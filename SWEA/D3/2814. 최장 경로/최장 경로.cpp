#include <bits/stdc++.h>
using namespace std;

bool graph[15][15];
bool visited[15];
int answer;
int N, M;

void func(int now, int ans) {
    answer = max(answer, ans);

    for (int i = 1; i <= N; i++) {
        if (!visited[i] && graph[now][i]) {
            visited[i] = true;
            func(i, ans + 1);
            visited[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N >> M;

        memset(graph, false, sizeof(graph));
        memset(visited, false, sizeof(visited));
        answer = 1; //무조건 하나의 정점은 존재함.

        int x, y;
        for (int i = 0; i < M; i++) {
            cin >> x >> y;
            graph[x][y] = true;
            graph[y][x] = true;
        }

        for (int i = 1; i <= N; i++) {
            visited[i] = true;
            func(i, 1);
            visited[i] = false;
        }

        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}