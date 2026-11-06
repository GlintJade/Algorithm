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

        string card[1005];
        for (int i = 0; i < N; i++) cin >> card[i];

        int lidx = 0;
        int ridx = N % 2 == 0 ? N / 2 : N / 2 + 1;


        string shuffle[1005];
        int idx = 0;
        while (true) {
            if (ridx == N) break;
            shuffle[idx++] = card[lidx++];
            shuffle[idx++] = card[ridx++];
        }
        shuffle[idx] = card[lidx];

        cout << "#" << test_case << ' ';
        for (int i = 0; i < N; i++) cout << shuffle[i] << ' ';
        cout << '\n';

    }


    return 0;
}