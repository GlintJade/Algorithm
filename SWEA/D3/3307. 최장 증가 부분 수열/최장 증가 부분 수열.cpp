#include<iostream>
using namespace std;

int main()
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;

		long long arr[1005] = { 0 };
		for (int i = 1; i <= N; i++) cin >> arr[i];

		int cnt[1005] = { 0 };
		for (int i = 1; i <= N; i++) {
			cnt[i] = 1; // 자기 자신 하나의 개수를 세팅
			for (int j = 1; j <= i; j++) {
				if (arr[i] > arr[j]) { //자기 자신보다 작은 수를 발견할 때
					cnt[i] = max(cnt[j] + 1, cnt[i]);
				}
			}
		}

		int answer = 0;
		for (int i = 1; i <= N; i++) {
			answer = max(cnt[i], answer);
		}
		

		cout << "#" << test_case << ' ' << answer << '\n';

	}
	return 0;
}