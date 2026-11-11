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

        int x, y;
        int score[12] = { 0, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, 0 };
        int answer = 0;
        for (int i = 0; i < N; i++) {
            cin >> x >> y;

            int xx = x * x;
            int yy = y * y;
            for (int i = 1; i <= 11; i++) {
                int sc = score[i] * score[i];
                if (xx + yy > sc) {
                    answer += (i-1);
                    break;
                }
                else if (xx + yy == sc) {
                    answer += i;
                    break;
                }
                else if (xx + yy == 0) {
                    answer += 10;
                    break;
                }
            }
        }


        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}