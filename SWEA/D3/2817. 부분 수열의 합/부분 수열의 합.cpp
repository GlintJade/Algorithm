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
         int arr[22];
         for (int i = 0; i < N; i++) {
             cin >> arr[i];
         }

         int answer = 0;
         for (int i = 1; i < (1 << N); i++) {
             int sum = 0;
             for (int j = 0; j < N; j++) {
                 if (i & (1 << j)) sum += arr[j];
             }
             if (sum == K) answer++;
         }

         cout << "#" << test_case << ' ' << answer << '\n';

    } 


    return 0;
}