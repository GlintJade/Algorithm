#include <iostream>
#include <vector>
#include <algorithm>
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
        
        char arr[25][25];
        int maxCol = 0, minCol = INT_MAX; //열
        int maxRow = 0, minRow = INT_MAX; //행
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j ++) {
                cin >> arr[i][j];

                if (arr[i][j] == '#') {
                    maxCol = max(maxCol, j);
                    minCol = min(minCol, j);
                    maxRow = max(maxRow, i);
                    minRow = min(minRow, i);
                    cnt++;
                }
            }
        }

        string answer = "no";
        int row = maxRow - minRow +1;
        int col = maxCol - minCol + 1;
        if (cnt == row * col && row == col) {
            answer = "yes";
        }

        cout << "#" << test_case << ' ' << answer <<'\n';

    }
    return 0;
}