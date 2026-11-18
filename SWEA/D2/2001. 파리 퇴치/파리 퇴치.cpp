#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;

        int arr[20][20];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> arr[i][j];
            }
        }

        int answer = 0;
        for (int i = 0; i < N - M +1; i++) {
            for (int j = 0; j < N - M +1; j++) {
                int sum = 0;
                for (int x = i; x < i + M; x++) {
                    for (int y = j; y <j+ M; y++) {
                        sum += arr[x][y];
                    }
                }
                answer = max(answer, sum);
            }
        }

        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}