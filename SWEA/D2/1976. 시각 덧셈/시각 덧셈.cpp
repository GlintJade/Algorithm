#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int h1, m1, h2, m2;
        cin >> h1 >> m1 >> h2 >> m2;

        m1 += m2;
        if (m1 >= 60) {
            h1++;
            m1 -= 60;
        }
        h1 += h2;
        if (h1 > 12) {
    		h1 -= 12;
		}

        cout << "#" << test_case << ' ' << h1 << ' ' << m1 << '\n';
	}

	return 0;
}