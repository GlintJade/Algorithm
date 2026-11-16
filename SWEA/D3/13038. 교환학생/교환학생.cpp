#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;

        int day[7];
        int cnt = 0;
        vector<int> v; //1인 곳을 담을 배열
        for (int i = 0; i < 7; i++) {
            cin >> day[i];
            if (day[i] == 1) {
                cnt++;
                v.push_back(i);
            }
        }

        int weeks = (n - 1) / cnt; // 마지막 주의 전 주까지의 주차 수
        int answer = weeks * 7; //마지막 주의 전 주까지의 소요일수
        int plus = INT_MAX; //마지막 주의 수업 시작점에 따른 소요일수 저장
        
        for (int count = 0; count < v.size(); count++) {
            int start = v[count];
            int m = n - (weeks * cnt); //마지막 주에 다녀야할 남은 일수
            int c = 0; // 경과 일수
            for (int st = start; st < start + 7; st++) {
                c++;
                if (day[st % 7] == 1) {
                    m--;
                    if (m == 0) break;
                }
            }
            plus = min(plus, c);
        }
        
        cout << "#" << test_case << ' ' << answer+plus << '\n';


    }
    return 0;
}