#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int L, U, X;
        cin >> L >> U >> X;

        int answer = X >= L ? (X > U ? -1 : 0) : L - X;

        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}