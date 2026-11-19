#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[21][10001];

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case) {
        int N, L;
        cin >> N >> L;

        vector<int> T(N + 1);
        vector<int> K(N + 1);

        for (int i = 1; i <= N; i++) {
            cin >> T[i] >> K[i];
        }

        for (int i = 0; i < 20; i++) fill(dp[i], dp[i] + 10000, 0);
        
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= L; j++) {
                if (j < K[i]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - K[i]] + T[i]);
                }
            }
        }


        cout << "#" << test_case << ' ' << dp[N][L] <<'\n';

    }
    return 0;
}