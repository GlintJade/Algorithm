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
         int A, B, N;
         cin >> A >> B >> N;
         if (A > B) swap(A, B);
         int cnt = 0;
         while (A <= N) {
             if (A > B) swap(A, B);
             A += B;
             cnt++;
         }


         cout << cnt << '\n';
	}

	return 0;
}