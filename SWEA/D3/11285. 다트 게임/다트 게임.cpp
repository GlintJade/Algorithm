#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int x, y;
        int answer = 0;
        for (int i = 0; i < N; i++) {
            cin >> x >> y;

            int radius2 = x * x + y * y;
            if (x == 0 && y == 0) {
                answer += 10;
            }
            else {
                for (int j = 1; j <= 10; j++) {
                    int round = 20 * j;
                    if (radius2 <= round * round) {
                        answer += (11 - j);
                        break;
                    }
                }
            }
        }

        cout << "#" << test_case << ' ' << answer <<'\n';

    }
    return 0;
}