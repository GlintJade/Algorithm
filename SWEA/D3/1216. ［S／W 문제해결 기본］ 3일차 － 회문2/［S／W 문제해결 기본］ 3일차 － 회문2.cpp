#include <bits/stdc++.h>
using namespace std;

int func(const string board[]) {
    string tmp, rev;
    for (int len = 100; len > 0; len--) {
        for (int row = 0; row < 100; row++) {
            for (int col = 0; col <= 100 - len; col++) {
                tmp = board[row].substr(col, len);
                rev = tmp;
                reverse(rev.begin(), rev.end());
                if (rev == tmp) return len;
            }
        }
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int test_case = 1; test_case <= 10; test_case++) {
        int tc;
        cin >> tc;

        string board1[100], board2[100];
        for (int i = 0; i < 100; i++) {
            cin >> board1[i];
            board2[i] = board1[i];
        }
        
        //string board2[100];은 빈 문자열 100개를 생성함
        //board2[i][j]에 접근하려면 각 문자열의 길이가 최소 100이어야 함.
        //resize(100) 또는 길이가 100인 문자열을 복사하여 공간 확보
        for (int i = 0; i < 100; i++) { //90도 회전
            for (int j = 0; j < 100; j++) {
                board2[i][j] = board1[j][99 - i];
            }
        }

        int len1 = func(board1);
        int len2 = func(board2);

        int answer = max(len1, len2);

        cout << "#" << tc << ' ' << answer << '\n';
    }

    return 0;
}