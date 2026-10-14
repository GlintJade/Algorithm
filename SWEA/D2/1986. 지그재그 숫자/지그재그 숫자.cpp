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

        int answer = 0;
        for (int i = 1; i <= N; i += 2) answer += i;
        for (int i = 2; i <= N; i += 2) answer -= i;

        cout << "#" << test_case  << ' ' << answer << '\n';
	}

	return 0;
}