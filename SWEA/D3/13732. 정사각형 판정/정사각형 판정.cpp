#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        char arr[25][25];
        int maxCol = INT_MIN, minCol = INT_MAX;
        int maxRow = INT_MIN, minRow = INT_MAX;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
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

        int width = maxCol - minCol + 1;
        int height = maxRow - minRow + 1;
        string answer = "no";
        if (width == height && cnt == width * width) {
            answer = "yes";
        }

        cout << "#" << test_case << ' ' << answer  << '\n';
        
    }
    return 0;
}