#include <bits/stdc++.h>
using namespace std;

char board[100][100];
char board2[100][100];

//연속된 메모리에 저장되는 배열이, 한 행의 크기를 알아야 다음 행의 시작 위치를 알 수 있음
int findLen(const char board[][100]) { 
    string s;
    for (int len = 100; len > 0; len--) { //길이를 100에서부터 시작해야 가장 큰 값을 찾아내기 쉬움
        for (int start = 0; start <= 100 - len; start++) {
            for (int i = 0; i < 100; i++) {
                for (int j = start; j < start + len; j++) {
                    s += board[i][j];
                }
                string s2 = s;
                reverse(s2.begin(), s2.end());
                if (s2 == s) {
                    return len;
                }
                s = "";
            }
        }
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        cin >> T;
        
        memset(board, 0, sizeof(board));
        memset(board2, 0, sizeof(board2));
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                cin >> board[i][j];

        int answer1 = findLen(board);
        
        for (int i = 0; i < 100; i++) 
            for (int j = 0; j < 100; j++) 
                board2[i][j] = board[j][99 - i];

        int answer2 = findLen(board2);

        int answer = max(answer1, answer2);

        cout << "#" << T << ' ' << answer << '\n';
    }
    return 0;
}