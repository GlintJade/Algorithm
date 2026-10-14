#include<iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& v, int N) {
    vector<vector<int>> answer(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            answer[j][N-1-i] = v[i][j];
        }
    }
    return answer;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case) {
        int N;
		cin >> N;
		vector<vector<int>> v(N, vector<int>(N));
		
		for (int i = 0; i < N; i++)
		    for (int j = 0; j < N; j++)
		        cin >> v[i][j];
		    
        vector<vector<int>> r90(N, vector<int>(N));
		vector<vector<int>> r180(N, vector<int>(N));
		vector<vector<int>> r270(N, vector<int>(N));

		r90 = rotate(v, N);
		r180 = rotate(r90, N);
		r270 = rotate(r180, N);


		cout << "#" << test_case << '\n';
		for (int i = 0; i < N; i++) {
		    for (int j = 0; j < N; j++) cout << r90[i][j];
		    cout << ' ';
		    for (int j = 0; j < N; j++) cout << r180[i][j];
		    cout << ' ';
		    for (int j = 0; j < N; j++) cout << r270[i][j];
		    cout << '\n';
		}
    
    }
	
	return 0;
}