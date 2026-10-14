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
        vector<int> v;
        int tmp;
        for (int i = 0; i < N; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        
        cout << "#" << test_case << ' ';
        for (int i : v) cout << i << ' ';
        cout << '\n';
	}

	return 0;
}