#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int snail[10][10] = { 0 };
        
        int dx[4] = { 0,1,0,-1 };
        int dy[4] = { 1,0,-1,0 };
        int dir = 0;
        int x = 0, y = 0;

        for (int val = 1; val <= N * N; val++) {
            snail[x][y] = val;

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N || snail[nx][ny] != 0) { //방향 틀기
                dir = (dir + 1) % 4;
            }
            x = x + dx[dir];
            y = y + dy[dir];
        }


        cout << "#" << test_case  << '\n';
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << snail[i][j] << ' ';
            }
            cout << '\n';
        }


    }
    return 0;
}