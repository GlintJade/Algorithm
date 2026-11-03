#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string number[10] = { "0001101", "0011001", "0010011", "0111101", "0100011",
    "0110001", "0101111", "0111011", "0110111", "0001011" };

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int N, M;
        cin >> N >> M;
        string arr[105];
        for (int i = 0; i < N; i++) cin >> arr[i];

        stack<int> s;
        bool check = false;
        for (int i = 0; i < N; i++) {
            for (int j = M-1; j >= 6; j--) {
                if (arr[i][j] == '1') {
                    string code = arr[i].substr(j - 6, 7);
                    for (int k = 0; k < 10; k++) {
                        if (number[k] == code) {
                            s.push(k);
                            j -= 6;
                            break;
                        }
                    }
                }
                if (s.size() == 8) {
                    check = true;
                    break;
                }
            }
            if (check) break;
        }
        
        int sum1 = 0, sum2 = 0, sum3 = 0; //sum1 홀수합, sum2 짝수합, sum3 전체합
        for (int i = 1; i <= 8; i++) {
            int top = s.top(); s.pop();
            sum3 += top;
            if (i % 2 == 0) sum2 += top;
            else sum1 += top;
        }
        
        int answer = sum1 * 3 + sum2;
        if (answer % 10 == 0) answer = sum3;
        else answer = 0;

        cout << "#" << test_case << ' ' << answer << '\n';
    }
    return 0;
}