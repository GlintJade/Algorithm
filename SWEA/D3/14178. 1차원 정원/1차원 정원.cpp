#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, D;
        cin >> N >> D;

        int len = (D * 2) + 1;
        int answer = N / len;
        if (N % len != 0) answer += 1;

        
        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}