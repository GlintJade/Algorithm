#include <iostream>
#include <cstring>
using namespace std;

bool graph[25][25];
bool visited[25];
int answer;
int N, M;

void func(int st, int ans) {
    answer = max(answer, ans);

    for (int i = 1; i <= N; i++) {
        if (!visited[i] && graph[st][i]) {
            visited[i] = true;
            func(i, ans+1);
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

        memset(visited, false, sizeof(visited));
        memset(graph, false, sizeof(graph)); 
        answer = 1; //정점 한 개는 무조건 지나므로

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