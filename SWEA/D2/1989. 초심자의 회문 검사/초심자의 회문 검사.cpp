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
        string s, s1;
        cin >> s;
        s1 = s;
        reverse(s.begin(), s.end());

        int answer = 0;
        if (s1 == s) answer = 1;
        cout << "#" << test_case << ' ' << answer << '\n';
	}

	return 0;
}