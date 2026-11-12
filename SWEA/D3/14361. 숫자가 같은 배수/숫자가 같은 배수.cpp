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

        int cnt[10] = { 0 };
        int tmp = N;
        int nlen = to_string(N).length();
        while (tmp) {
            cnt[tmp % 10]++;
            tmp /= 10;
        }

        string answer = "impossible";
        for (int i = 2; i <= 9; i++) {
            int val = N * i;

            if (to_string(val).length() != nlen) {
                break;
            }

            int cnt2[10] = { 0 };
            while (val) {
                cnt2[val % 10]++;
                val /= 10;
            }

            bool check = true;
            for (int i = 0; i < 10; i++) {
                if (cnt[i] != cnt2[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                answer = "possible";
                break;
            }
        }
        
        cout << "#" << test_case << ' ' <<answer << '\n';
        
    }
    return 0;
}