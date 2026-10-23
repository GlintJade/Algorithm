#include <bits/stdc++.h>
using namespace std;

int N, M;
bool graph[15][15]; //양방향 나타내기 위한 배열
bool visited[15]; //각 노드 방문여부 배열 (재방문 금지 목적)
int answer;

void dfs(int now, int length) {
    answer = max(answer, length);
    
    for (int next = 1; next <= N; next++) {
        if (graph[now][next] && !visited[next]) {
            visited[next] = true;
            dfs(next, length + 1);
            visited[next] = false;
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
         answer = 0;

         int x, y;
         for (int i = 0; i < M; i++) {
             cin >> x >> y;
             graph[x][y] = true; //양방향 이동 가능 여부 
             graph[y][x] = true;
         }

         for (int i = 1; i <= N; i++) { //1부터 N까지의 노드를 시작으로 최장거리 갱신
             visited[i] = true;
             dfs(i, 1);
             visited[i] = false; //나오고 나서 방문여부 다시 false로 돌리기
         }

         cout << "#" << test_case << ' ' << answer << '\n';

    } 


    return 0;
}