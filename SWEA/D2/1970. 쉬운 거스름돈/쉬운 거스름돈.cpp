#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
    
    vector<int> v = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
	for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;
        
        cout << "#" << test_case << '\n';
		for (int i = 0; i < 8; i++) {
		    int cnt = 0;
		    while (N - v[i] >= 0) {
		        N -= v[i];
		        cnt++;
		    }
		    cout << cnt << ' ';
		}
        cout << '\n';
	}

	return 0;
}