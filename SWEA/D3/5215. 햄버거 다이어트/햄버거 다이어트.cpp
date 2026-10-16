#include<bits/stdc++.h>
using namespace std;

int arr[20][2];
int N, L;
int answer;

void func(int s, int k, int idx) { //점수와 칼로리, 재료숫자
    if (k > L) return;

    answer = max(answer, s);

    if (idx == N) return;

    func(s + arr[idx][0], k + arr[idx][1], idx + 1); //재료를 포함하는 경우

    func(s, k, idx + 1); //재료 포함 안하는 경우

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
         cin >> N >> L; //점수, 제한칼로리
         answer = 0;

         for (int i = 0; i < 20; i++) {
             arr[i][0] = 0;
             arr[i][1] = 0;
         }
         
         for (int i = 0; i < N; i++) {
             cin >> arr[i][0] >> arr[i][1]; //점수, 칼로리
         }

         func(0, 0, 0);
         

         cout << "#" << test_case << ' ' << answer << '\n';
	}

	return 0;
}