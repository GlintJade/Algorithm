#include<iostream>
#include <cstring>
using namespace std;

int dp[105][1005];

int main()
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K;
		cin >> N >> K;

		memset(dp, 0, sizeof(dp));

		int V[105] = { 0 };
		int C[105] = { 0 };
		for (int i = 1; i <= N; i++) {
			cin >> V[i] >> C[i];
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= K; j++) {
				if (j < V[i]) {
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i-1][j - V[i]] + C[i]);
				}
			}
		}
		

		cout << "#" << test_case << ' ' << dp[N][K] << '\n';

	}
	return 0;
}