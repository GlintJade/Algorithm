#include<iostream>
#include <cstring>
using namespace std;

int dp[1005][1005];

int main()
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string st1, st2;
		cin >> st1 >> st2;
		memset(dp, 0, sizeof(dp));
		
		for (int i = 0; i < st1.length(); i++) {
			char c1 = st1[i];
			for (int j = 0; j < st2.length(); j++) {
				char c2 = st2[j];
				if (c1 == c2) {
					dp[i + 1][j + 1] = dp[i][j] + 1;
				}
				else {
					dp[i + 1][j + 1] = max(dp[i][j+1], dp[i+1][j]);
				}
			}
		}
		

		cout << "#" << test_case << ' ' << dp[st1.length()][st2.length()]<< '\n';

	}
	return 0;
}