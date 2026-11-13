#include <bits/stdc++.h>
using namespace std;

int lcs[1005][1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string A, B;
        cin >> A >> B;

        memset(lcs, 0, sizeof(lcs));
        int alen = A.length();
        int blen = B.length();

        
        for (int i = 1; i <= alen; i++) {
            for (int j = 1; j <= blen; j++) {
                if (A[i-1] == B[j-1]) {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                }
                else {
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]); //다르면, 이전 최장 공통 부분수열을 가져옴
                }
            }
        }

        cout << "#" << test_case << ' ' << lcs[alen][blen] << '\n';
        
    }
    return 0;
}