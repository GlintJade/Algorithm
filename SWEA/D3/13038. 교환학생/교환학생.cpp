#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int n;
        cin >> n;

        int arr[7];
        int possible = 0;
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
            if (arr[i] == 1) possible++;
        }
        
        int minn = INT_MAX;
        for (int st = 0; st < 7; st++) { //1로 시작할 때의 경우들의 답 중 최댓값
            if (!arr[st]) continue;

            int answer = ((n - 1) / possible) * 7;
            int m = ((n - 1) % possible) + 1;

            for (int i = 0; i < 7; i++) {
                int day = (st + i) % 7;
                answer++;

                if (arr[day] == 1) {
                    m--;
                    if (m == 0) break;
                }
            }
            minn = min(minn, answer);
        }

        cout << "#" << test_case << ' ' << minn << '\n';
    }
    return 0;
}