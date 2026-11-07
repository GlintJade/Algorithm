#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, K;
        cin >> N >> K;

        bool check[105] = { false };
        int student;
        for (int i = 0; i < K; i++) {
            cin >> student;
            check[student] = true;
        }
        cout << "#" << test_case << ' ';
        for (int i = 1; i <= N; i++) {
            if (!check[i]) cout << i << ' ';
        }
        cout <<'\n';


    }


    return 0;
}