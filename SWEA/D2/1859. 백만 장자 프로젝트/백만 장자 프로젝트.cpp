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

         vector<int> arr;
         int tmp;
         for (int i = 0; i < N; i++) {
             cin >> tmp;
             arr.push_back(tmp);
         }

         long long answer = 0, sum =0;
         int maxx = arr[N-1];
         for (int i = N - 2; i >= 0; i--) {
             if (arr[i] >= maxx) {
                 maxx = max(maxx, arr[i]);
             }
             else { //최댓값보다 작은 앞의 수를 만났을 때는 차익 계산
                 answer += maxx - arr[i];
             }
         }

         cout << "#" << test_case  << ' ' << answer << '\n';
	}

	return 0;
}