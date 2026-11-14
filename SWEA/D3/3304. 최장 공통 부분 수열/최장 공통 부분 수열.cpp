#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int dp[1005][1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string s1, s2;
        cin >> s1 >> s2;

        memset(dp, 0, sizeof(dp));

        int s1len = s1.length();
        int s2len = s2.length();

        for (int i = 1; i <= s1len; i++) {
            for (int j = 1; j <= s2len; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }


        cout << "#" << test_case << ' ' << dp[s1len][s2len] << '\n';

    }
    return 0;
}