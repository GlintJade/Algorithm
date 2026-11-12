#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string A, B;
        cin >> A >> B;

        memset(dp, 0, sizeof(dp));
        
        int alen = A.length();
        int blen = B.length();
        for (int i = 1; i <= alen; i++) {
            for (int j = 1; j <= blen; j++) {
                if (A[i-1] == B[j-1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        

        cout << "#" << test_case << ' '  << dp[alen][blen] << '\n';
        
    }
    return 0;
}