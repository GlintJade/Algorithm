#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int a, b, c;
        cin >> a >> b >> c;

        double answer = 0;
        if (2 * b != a + c) {
            answer = (double)abs(a + c - 2 * b) / 2;
        }
        
        cout << fixed;
        cout.precision(1);

        cout << "#" << test_case << ' ' << answer << '\n';

        


    }
    return 0;
}