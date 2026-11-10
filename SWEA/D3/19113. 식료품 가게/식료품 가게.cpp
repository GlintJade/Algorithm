#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        long long arr[205];
        int len = N * 2;
        for (int i = 0; i < len; i++) cin >> arr[i];

        bool check[205] = { false };
        vector<long long> answer;
        for (int i = 0; i < len; i++) {
            if (check[i] == true) continue;
            check[i] = true; //제일 앞의 값은 할인가격
            answer.push_back(arr[i]);
            long long val = arr[i] + (arr[i] / 3);
            for (int j = i + 1; j < len; j++) {
                if (!check[j] && arr[j] == val) {
                    check[j] = true;
                    break;
                }
            }
        }

        
        cout << "#" << test_case << ' ';
        for (int i = 0; i < answer.size(); i++) cout << answer.at(i) << ' ';
        cout << '\n';
        
    }
    return 0;
}