#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int triangle[15][15];
        for (int i = 1; i <= N; i++) { //모든 행의 첫 번째 열과 마지막 열은 1
            triangle[i][1] = 1;
            triangle[i][i] = 1;
        }
        
        for (int i = 3; i <= N; i++) {
            for (int j = 2; j <= i - 1; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        
        cout << "#" << test_case << '\n';
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << triangle[i][j] << ' ';
            }
            cout << '\n';
        }
	}

	return 0;
}