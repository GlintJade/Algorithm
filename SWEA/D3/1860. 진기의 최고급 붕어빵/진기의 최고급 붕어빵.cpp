#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
     for (test_case = 1; test_case <= T; ++test_case) {
         int N, M, K; //손님 N명, M초의 시간동안 K개의 붕어빵 만듦.
         cin >> N >> M >> K;

         int customer[105] = { 0 };
         for (int i = 0; i < N; i++) 
             cin >> customer[i];

         sort(customer, customer + N);
         string ans = "Possible";
         for (int i = 0; i < N; i++) {
             if (((customer[i] / M) * K) - (i + 1) < 0) {
                 ans = "Impossible";
                 break;
             }
         }

         cout << "#" << test_case << ' ' << ans << '\n';

    } 


    return 0;
}