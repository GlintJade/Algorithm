#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
     for (test_case = 1; test_case <= 10; ++test_case) {
         int N;
         cin >> N;

         int arr[105][105];
         for (int i = 0; i < 100; i++)
             for (int j = 0; j < 100; j++)
                 cin >> arr[i][j];

         int answer = 0;
         for (int i = 0; i < 100; i++) {
             bool isexit1 = false;
             for (int j = 0; j < 100; j++) {
                 if (arr[j][i] == 1) isexit1 = true;
                 else if (arr[j][i] == 2) {
                     if (isexit1) {
                         answer++;
                         isexit1 = false;
                     }
                 }
             }
         }
         

         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}