#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, Q;
        cin >> N >> Q;


        int box[1005] = { 0 };
        int L, R;
        for (int i = 1; i <= Q; i++) {
            cin >> L >> R;
            
            for (int j = L; j <= R; j++) {
                box[j] = i;
            }
        }

        cout << "#" << test_case << ' ';
        for (int i = 1; i <= N; i++) cout << box[i] << ' ';
        cout << '\n';
    }
    return 0;
}