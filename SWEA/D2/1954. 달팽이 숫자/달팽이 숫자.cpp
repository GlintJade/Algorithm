#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir = 0;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int num;
        cin >> num;
        int board[12][12] = {0};
        
        int x = 0, y = 0;
        int dir = 0;
        
        for(int i = 1; i<=num*num; i++) {
            board[x][y] = i;
            
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(nx < 0 || nx >= num || ny < 0 || ny >= num || board[nx][ny] != 0) { //범위를 벗어나거나 이미 채워진 경우 방향 틀기
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
            x = nx;
            y = ny;
        }
		
        cout << "#" << test_case << '\n';
        for(int i = 0; i < num; i++) {
            for(int j = 0; j< num; j++) {
                cout << board[i][j] << ' ';
            }
            cout << '\n';
        }

	}
	return 0;
}