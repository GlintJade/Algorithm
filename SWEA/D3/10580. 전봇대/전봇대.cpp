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
        cin >> N;

        int maxx = 0;
        int A[10005] = { 0 };
        int B[10005] = { 0 };
        for (int i = 0; i < N; i++) {
            cin >> A[i] >> B[i];
        }

        int answer = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                if ((A[i] - A[j]) * (B[i] - B[j]) < 0) {
                    answer++;
                }
            }
        }


        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}