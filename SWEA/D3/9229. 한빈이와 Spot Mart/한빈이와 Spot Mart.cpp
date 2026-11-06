#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;
        
        int snack[1005];
        for (int i = 1; i <= N; i++) {
            cin >> snack[i];
        }
        
        int result = -1;
        for (int i = 1; i <= N; i++) {
            int maxx = -1;
            for (int j = i + 1; j <= N; j++) {
                int sum = snack[i] + snack[j];
                if (sum <= M) {
                    maxx = max(maxx, snack[i] + snack[j]);
                }
            }
            result = max(maxx, result);
        }

        cout << "#" << test_case << ' ' << result << '\n';


    }


    return 0;
}