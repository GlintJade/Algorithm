#include <bits/stdc++.h>
using namespace std;

int N, R;
long long MOD = 1234567891;

long long power(long long base, long long exp) {
    long long answer = 1;

    while (exp > 0) {
        if (exp % 2 == 1) {
            answer = (answer * base) % MOD;
        }

        base = (base * base) % MOD;
        exp /= 2;
    }
    return answer;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> N >> R;

        long long up = N % MOD;
        for (long long i = N-1; i > 0; i--) { // 분자
            up = (up * i) % MOD;
        }

        //분모
        long long down1 = 1; // R!
        for (long long i = R; i > 0; i--) {
            down1 = (down1 * i) % MOD;
        }
        long long down2 = 1; // (N-R)!
        for (long long i = N-R; i > 0; i--) {
            down2 = (down2 * i) % MOD;
        }

        long long base = (down1 * down2) % MOD;
        long long inverse = power(base, MOD-2);
        long long answer = (up * inverse) % MOD;


        cout << "#" << test_case << ' ' << answer << '\n';
    }
    return 0;
}