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
        
        int a, b;
        int way[5005] = { 0 };
        for (int i = 0; i < N; i++) {
            cin >> a >> b;
            for (int i = a; i <= b; i++) way[i]++;
        }

        int p;
        cin >> p;
        int printBus[505];
        for (int i = 0; i < p; i++) {
            cin >> printBus[i];
        }
        cout << "#" << test_case << ' ';
        for (int i = 0; i < p; i++) {
            cout << way[printBus[i]] << ' ';
        }
        cout << '\n';


    }


    return 0;
}