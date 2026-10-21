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

         int arr[55][55];
         string tmp;
         for (int i = 0; i < N; i++) {
             cin >> tmp;
             for (int j = 0; j < N; j++) {
                 arr[i][j] = tmp[j] - '0';
             }
         }

         int half = N / 2;
         int answer = 0;
         for (int i = 0; i < N; i++) {
             for (int j = 0; j < N; j++) {
                 if (abs(half - i) + abs(half - j) <= half) {
                     answer += arr[i][j];
                 }
             }
         }

         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}