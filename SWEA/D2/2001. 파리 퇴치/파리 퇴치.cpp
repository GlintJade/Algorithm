#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;
        
        int board[20][20];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> board[i][j];

        int cnt = 0;
        int maxx = INT_MIN; //climits 헤더
        for (int i = 0; i < N - M+1; i++) {
            for (int j = 0; j < N - M+1; j++) {
                int sum = 0;
                
                for (int k = 0; k < M; k++) {
                    for (int l = 0; l < M; l++) {
                        sum += board[i + k][j + l];
                    }
                }
                maxx = max(maxx, sum);
            }
        }
        cout << "#" << test_case << ' ' << maxx << '\n';

	}

	return 0;
}