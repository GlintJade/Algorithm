#include <iostream>
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

        int answer = 0;
        
        int len1 = s1.length();
        int len2 = s2.length();

        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                if (s1[i] == s2[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                }
                else {
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }

        cout << "#" << test_case << ' '<< dp[len1][len2] << '\n';

    }
    return 0;
}