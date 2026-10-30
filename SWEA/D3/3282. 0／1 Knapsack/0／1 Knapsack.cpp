#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int N, K;
        cin >> N >> K;

        int v[105], c[105];
        for (int i = 1; i <= N; i++) {
            cin >> v[i] >> c[i];
        }

        int dp[105][1005] = {0};
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= K; j++) {
                if (j < v[i]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + c[i]);
                }
            }
        }

        cout << "#" << test_case << ' ' << dp[N][K] << '\n';
    }

    return 0;
}