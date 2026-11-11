#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        string X;
        cin >> N >> X;

        //10진법 변환
        int answer = 0;
        int index = 1;
        int MOD = N - 1;
        reverse(X.begin(), X.end());
        for (char c : X) {
            int tmp = (c - '0');
            answer += (tmp % MOD) * index;
            index *= (N % MOD);
        }

        cout << "#" << test_case << ' ' << answer % MOD << '\n';
        
    }
    return 0;
}