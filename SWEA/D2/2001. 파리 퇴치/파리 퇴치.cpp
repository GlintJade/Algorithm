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

        int arr[20][20] = { 0 };
        int prefix[20][20] = { 0 };
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> arr[i][j];
                prefix[i][j] = arr[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
            }
        }

        int answer = 0;
        for (int i = M; i <= N; i++) {
            int sum = 0;
            for (int j = M; j <= N; j++) {
                sum = prefix[i][j] - prefix[i - M][j] - prefix[i][j - M] + prefix[i - M][j - M];
                answer = max(answer, sum);
            }
        }


        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}