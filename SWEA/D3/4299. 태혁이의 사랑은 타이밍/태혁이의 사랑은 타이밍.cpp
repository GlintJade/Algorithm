#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int D, H, M;
        cin >> D >> H >> M;

        int time1 = 11 * 1440 + 11 * 60 + 11; //11일 11시 11분
        int time2 = D * 1440 + H * 60 + M;

        int answer;
        if (time1 > time2) answer = -1;
        else if (time2 >= time1) {
            answer = time2 - time1;
        }

        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}