#include<iostream>
using namespace std;

int N, M;
int board[10][10];
int dx[8] = { 0, 1, 0, -1, 1, 1, -1 ,-1 };
int dy[8] = { 1, 0, -1, 0, 1, -1, 1, -1 };

void game(int x, int y, int color) {
	board[x][y] = color;

	for (int dir = 0; dir < 8; dir++) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];

		while (true) {
			if (nx < 0 || nx >= N || ny < 0 || ny >= N || board[nx][ny] == 0) {
				break;
			}
			if (board[nx][ny] == color) {
				int stdx = x + dx[dir], stdy = y + dy[dir];
				while (stdx != nx || stdy !=ny) {
					board[stdx][stdy] = color;
					stdx += dx[dir];
					stdy += dy[dir];
				}

				break;
			}
			nx += dx[dir];
			ny += dy[dir];
		}
	}

}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		for (int i = 0; i < 10; i++)fill(board[i], board[i] + 10, 0);

		board[N / 2 - 1][N / 2 - 1] = 2, board[N / 2][N / 2] = 2;
		board[N / 2][N / 2 - 1] = 1, board[N / 2 - 1][N / 2] = 1;

		int x, y, color;
		for (int i = 0; i < M; i++) {
			cin >> x >> y >> color; // color 1 = 흑, 2 = 백

			game(x-1, y-1, color);
		}

		int black = 0, white = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] == 1) black++;
				else if (board[i][j] == 2)white++;
			}
		}

		cout << "#" << test_case << ' ' << black << ' ' << white << '\n';

	}
	return 0;
}