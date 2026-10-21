#include <bits/stdc++.h>
using namespace std;

int A[25];
int N, K;
int answer;

void func(int sum, int r) {
    if (sum == K) {
        answer++;
        return;
    }

    for (int i = r; i < N; i++) {
        if (sum + A[i] <= K) {
            func(sum + A[i], i+1);
        }
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
     for (test_case = 1; test_case <= T; ++test_case) {
         cin >> N >> K;
         for (int i = 0; i < 25; i++) A[i] = 0;
         answer = 0;
         for (int i = 0; i < N; i++) cin >> A[i];

         func(0, 0);

         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}