#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, P;
        cin >> N >> P; // N번 선택, P층에 멈추면 폭탄터짐

        int answer = 0;
        for (int i = 1; i <= N; i++) {
            answer += i;
            if (answer == P) answer -= 1;
        }
        
        cout << answer << '\n';
        
    }
    return 0;
}