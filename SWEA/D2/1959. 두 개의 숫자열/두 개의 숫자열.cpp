#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;

        int A[25], B[25];
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int j = 0; j < M; j++) cin >> B[j];

        if (N < M) { //N의 크기를 가진 A가 항상 더 크게
            swap(N, M);
            swap(A, B);
        }

        int answer = 0;
        for (int i = 0; i <= N - M; i++) {
            int sum = 0;
            for (int j = 0; j < M; j++) {
                sum += (A[i + j] * B[j]);
            }
            answer = max(answer, sum);
        }

        cout << "#" << test_case << ' ' <<answer << '\n';


    }
    return 0;
}