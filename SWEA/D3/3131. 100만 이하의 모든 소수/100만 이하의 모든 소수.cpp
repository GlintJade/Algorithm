#include <bits/stdc++.h>
using namespace std;

bool isPrime[1000001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
    for (test_case = 1; test_case <= 1; ++test_case) {
        memset(isPrime, true, sizeof(isPrime));
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i * i <= 1000000; i++) {
            if (!isPrime[i]) continue;
            for (int j = i * i; j <= 1000000; j+=i) {
                isPrime[j] = false;
            }
        }

        for (int i = 2; i <= 1000000; i++) {
            if (isPrime[i]) {
                cout << i << ' ';
            }
        }

        //cout << "#" << test_case << ' '  << '\n';
        
    }
    return 0;
}