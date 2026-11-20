#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[20][10000];

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int arr[15][15] = {0};
        
        arr[1][1] = 1;

        for (int i = 2; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }

        cout << "#" << test_case <<'\n';
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }

    }
    return 0;
}