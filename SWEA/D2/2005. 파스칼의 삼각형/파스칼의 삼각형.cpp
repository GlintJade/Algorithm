#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int triangle[15][15] = { 0 };
        for (int i = 1; i <= N; i++) triangle[i][1] = 1;
        for (int i = 2; i <= N; i++) {
            for (int j = 2; j <= N; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }

        cout << "#" << test_case << '\n';
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << triangle[i][j] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}