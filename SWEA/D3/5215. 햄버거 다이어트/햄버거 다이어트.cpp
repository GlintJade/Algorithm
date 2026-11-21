#include<iostream>
#include <vector>
using namespace std;

int DP[25][10005]; //재료 i개 골랐을 때 j칼로리 이하인 경우 최대 점수

int main()
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, L;
		cin >> N >> L; //N개 재료, 최대 L칼로리
		for (int i = 0; i < 25; i++) fill(DP[i], DP[i] + 10005, 0);

		int T[1005] = { 0 }; //맛
		int K[1005] = { 0 }; //칼로리
		for (int i = 1; i <= N; i++) {
			cin >> T[i] >> K[i];
		}

		
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= L; j++) {
				if (K[i] > j) {
					DP[i][j] = DP[i - 1][j]; //이전 재료의 동일한 칼로리 점수를 가져옴 -> 재료선택을 못한다 의미
				}
				else {
					DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - K[i]] + T[i]); //선택하거나, 선택 안하거나 둘 중 큰 점수
				}
			}
		}

		cout << "#" << test_case << ' ' <<DP[N][L] << '\n';

	}
	return 0;
}