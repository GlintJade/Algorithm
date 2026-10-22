#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
     for (test_case = 1; test_case <= 10; ++test_case) {
         int tc;
         cin >> tc;

         int board[105][105];
         for (int i = 0; i < 100; i++)
             for (int j = 0; j < 100; j++)
                 cin >> board[i][j];

         int answer = INT_MIN;
         for (int i = 0; i < 100; i++) {
             int sum1 = 0, sum2 =0;
             for (int j = 0; j < 100; j++) { 
                 sum1 += board[i][j]; // 행별 합
                 sum2 += board[j][i]; // 열별 합
             }
             sum1 = max(sum1, sum2);
             answer = max(sum1, answer);
         }

         int cross1 = 0, cross2 = 0;
         for (int i = 0; i < 100; i++) {
             cross1 += board[i][i];
             cross2 += board[99 - i][i];
         }
         cross1 = max(cross1, cross2);
         answer = max(answer, cross1);

         cout << "#" << test_case << ' ' << answer << '\n';

    } 


    return 0;
}