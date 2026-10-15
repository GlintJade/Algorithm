#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	for (test_case = 1; test_case <= 10; ++test_case) {
         int N;
         cin >> N;
         int arr[1005];
         for (int i = 0; i < N; i++) {
             cin >> arr[i];
         }

         int answer = 0;
         for (int i = 2; i < N-2; i++) {
             if (arr[i] > arr[i - 1] && arr[i] > arr[i - 2]) {
                 int val1 = arr[i - 1] > arr[i - 2] ? arr[i - 1] : arr[i - 2];
                 if (arr[i] > arr[i + 1] && arr[i] > arr[i+2]) {
                     int val2 = arr[i + 1] > arr[i + 2] ? arr[i + 1] : arr[i + 2];
                     answer += (arr[i] - max(val1, val2));
                 }
             }
         }

         cout << "#" << test_case << ' ' << answer << '\n';
	}

	return 0;
}