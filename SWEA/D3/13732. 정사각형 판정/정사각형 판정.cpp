#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        char board[25][25];
        int maxCol = 0, minCol = INT_MAX;
        int maxRow = 0, minRow = INT_MAX;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> board[i][j];

                if (board[i][j] == '#') {
                    maxCol = max(maxCol, j);
                    minCol = min(minCol, j);
                    maxRow = max(maxRow, i);
                    minRow = min(minRow, i);
                    cnt++;
                }
            }
        }

        int width = maxCol - minCol + 1;
        int height = maxRow - minRow + 1;
        string answer = "no";
        if (width == height && width * height == cnt) {
            answer = "yes";
        }


        cout << "#" << test_case << ' ' << answer <<'\n';

    }
    return 0;
}