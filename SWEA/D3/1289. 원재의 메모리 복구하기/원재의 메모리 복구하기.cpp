#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
     for (test_case = 1; test_case <= T; ++test_case) {
         string tmp;
         cin >> tmp;

         int arr[55];
         int index = 0;
         for (char c : tmp) {
             arr[index++] = c - '0';
         }
         
         int answer = 0;
         if (arr[0]) answer++;
         for (int i = 0; i < tmp.length()-1; i++) {
             if (arr[i] != arr[i + 1]) answer++;
         }


         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}