#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int N, K;
        cin >> N >> K;
        int board[20][20] = { 0 };
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> board[i][j];

        int answer = 0;

        //가로 검증
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            for (int j = 0; j < N; j++) {
                if (board[i][j] == 1) cnt++;
                else { // 벽 만났을 때
                    if (cnt == K) answer++;
                    cnt = 0;
                }
            }
            if (cnt == K) answer++;
        }

        //세로 검증
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            for (int j = 0; j < N; j++) {
                if (board[j][i] == 1) cnt++;
                else { // 벽 만났을 때
                    if (cnt == K) answer++;
                    cnt = 0;
                }
            }
            if (cnt == K) answer++;
        }

        cout << "#" << test_case  << ' ' << answer << '\n';
	}

	return 0;
}