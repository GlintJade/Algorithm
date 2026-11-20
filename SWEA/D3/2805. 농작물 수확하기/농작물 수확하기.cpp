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
		int N;
		cin >> N;

		string line;
		int half = N / 2;
		int answer = 0;
		for (int i = 0; i < N; i++) {
			cin >> line;

			int d = abs(half - i);
			for (int j = d; j < N - d; j++) {
				answer += line[j] - '0';
			}
		}



		cout << "#" << test_case << ' ' <<answer << '\n';

	}
	return 0;
}