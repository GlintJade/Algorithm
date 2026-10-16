#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	for (test_case = 1; test_case <= 10; ++test_case) {
         int dump;
         cin >> dump;

         int arr[102];
         for (int i = 0; i < 100; i++) cin >> arr[i];

         while (dump--) {
             sort(arr, arr + 100, greater<>());
             if (arr[0] - arr[99] <= 1) break;
             arr[0]--;
             arr[99]++;
         }

         sort(arr, arr + 100, greater<>());
         int answer = arr[0] - arr[99];

         cout << "#" << test_case << ' ' << answer << '\n';
         
	}

	return 0;
}