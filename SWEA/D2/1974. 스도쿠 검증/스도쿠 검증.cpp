#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int board[9][9];
        int answer = 1;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> board[i][j];

        //가로 검증
        for (int i = 0; i < 9; i++) {
            int arr[10] = { 0 };
            for (int j = 0; j < 9; j++) {
                if (arr[board[i][j]] > 0) answer = 0;
                arr[board[i][j]]++;
            }
        }

        //세로 검증
        for (int i = 0; i < 9; i++) {
            int arr[10] = { 0 };
            for (int j = 0; j < 9; j++) {
                if (arr[board[j][i]] > 0) answer = 0;
                arr[board[j][i]]++;
            }
        }

        //3 x 3 블록 검증
        int tmp = 0;
        for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {
                int arr[10] = { 0 };
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        tmp = board[r + i][c + j];
                        if (arr[tmp] > 0) answer = 0;
                        arr[tmp]++;
                    }
                }
            }
        }


        cout << "#" << test_case << ' ' << answer << '\n';
	}

	return 0;
}