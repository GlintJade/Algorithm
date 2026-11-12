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

        int answer = 1;
        for (int i = 1; i <= N/2 +1; i++) {
            int sum = i;
            for (int j = i + 1; j <= N/2+1; j++) {
                sum += j;
                if (sum == N) {
                    answer++;
                    break;
                } else if (sum > N) {
                    break;
                }
            }
        }

        cout << "#" << test_case << ' '  << answer << '\n';
        
    }
    return 0;
}