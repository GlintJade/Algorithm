#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
string answer[10][3];
void locate(int (*board)[10], int cnt) { //cnt : 몇 번 회전했는지
    int board2[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board2[j][N - 1 - i] = board[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = board2[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            answer[i][cnt] += (board[i][j] + '0');
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

        for (int i = 0; i < 10; i++) fill(answer[i], answer[i] + 3, "");

        int board[10][10];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> board[i][j];
            }
        }

        locate(board, 0);
        locate(board, 1);
        locate(board, 2);

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