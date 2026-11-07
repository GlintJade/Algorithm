#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string TC;
        cin >> TC;

        string num[10] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN" };

        int len;
        cin >> len;

        int arr[10] = { 0 };
        string tmp;
        for (int i = 0; i < len; i++) {
            cin >> tmp;
            for (int i = 0; i < 10; i++) {
                if (tmp == num[i]) {
                    arr[i]++;
                    break;
                }
            }
        }
        
        cout << "#" << test_case << ' ';
        for (int i = 0; i < 10; i++) {
            while (arr[i]) {
                cout << num[i] << ' ';
                arr[i]--;
            }
        }


        
    }
    return 0;
}