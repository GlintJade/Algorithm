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
        int minRow = INT_MAX, maxRow = INT_MIN; //행
        int minCol = INT_MAX, maxCol = INT_MIN; //열
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '#') {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
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

        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}