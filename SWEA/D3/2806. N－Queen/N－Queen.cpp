#include <bits/stdc++.h>
using namespace std;

int N;
int answer; //경우의 수
int isused1[25];
int isused2[25];
int isused3[25];

void func(int x) {
    if (x == N) { //마지막 N * N에 도착하면 종료
        answer++;
        return;
    }
    
    for (int i = 0; i < N; i++) {
        if (isused1[i] || isused2[i + x] || isused3[x - i + N - 1]) continue;
        isused1[i] = 1;
        isused2[i + x] = 1;
        isused3[x - i + N - 1] = 1;
        func(x + 1);
        isused1[i] = 0;
        isused2[i + x] = 0;
        isused3[x - i + N - 1] = 0;
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
     for (test_case = 1; test_case <= T; ++test_case) {
         cin >> N;

         answer = 0;
         for (int i = 0; i < 25; i++) {
             isused1[i] = 0;
             isused2[i] = 0;
             isused3[i] = 0;
         }
          
         func(0);

         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}