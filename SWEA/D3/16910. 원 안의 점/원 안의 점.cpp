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

        int result = 0;
        for (int x = -N; x <= N; x++) {
            for (int y = -N; y <= N; y++) {
                if (x * x + y * y <= N * N) {
                    result++;
                }
            }
        }

        cout << "#" << test_case << ' ' << result <<'\n';


    }


    return 0;
}