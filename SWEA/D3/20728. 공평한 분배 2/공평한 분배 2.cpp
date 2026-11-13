#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, K;
        cin >> N >> K;

        int arr[55];
        for (int i = 0; i < N; i++) cin >> arr[i];
        sort(arr, arr + N); //정렬 후 연속된 K개의 값의 맨 앞과 맨 뒤를 비교

        int answer = INT_MAX;
        for (int i = 0; i <= N - K; i++) {
            answer = min(answer, arr[i + K-1] - arr[i]);
        }


        cout << "#" << test_case << ' ' << answer << '\n';
        
    }
    return 0;
}