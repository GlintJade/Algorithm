#include <iostream>
#include <vector>
using namespace std;

int N;
int board[10][10];
void location() {
    int board2[10][10] = { 0 };
    for (int i = 0; i < N; i++) { //90도 시계방향 회전
        for (int j = 0; j < N; j++) {
            board2[j][N-1-i] = board[i][j];
        }
    }

    for (int i = 0; i < N; i++) { // 회전된 배열 복사
        for (int j = 0; j < N; j++) {
            board[i][j] = board2[i][j];
        }
    }
}

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N;
        for (int i = 0; i < 10; i++) fill(board[i], board[i] + 10, 0);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> board[i][j];
            }
        }
        
        string answer[10][3];

        location();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                answer[i][0] += board[i][j] + '0';
            }
        }

        location();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                answer[i][1] += board[i][j] + '0';
            }
        }

        location();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                answer[i][2] += board[i][j] + '0';
            }
        }

        cout << "#" << test_case << '\n';
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 3; j++) {
                cout << answer[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}