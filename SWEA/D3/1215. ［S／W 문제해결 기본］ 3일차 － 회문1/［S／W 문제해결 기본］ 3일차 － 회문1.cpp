#include <bits/stdc++.h>
using namespace std;

int countPal(const string board[], int len) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9 - len; j++) {
            string palindrome = board[i].substr(j, len);
            string rever = palindrome;
            reverse(rever.begin(), rever.end());
            if (palindrome == rever) count++;
        }
    }
    return count;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
     for (test_case = 1; test_case <= 10; ++test_case) {
         int len;
         cin >> len;
         string board[8];
         for (int i = 0; i < 8; i++) {
             cin >> board[i];
         }
         
         string board2[8];
         for (int i = 0; i < 8; i++) {
             for (int j = 0; j < 8; j++) {
                 board2[i] += board[j][7 - i];
             }
         }

         int answer = countPal(board, len) + countPal(board2, len);

         
         cout << "#" << test_case << ' ' << answer << '\n';

    } 


    return 0;
}