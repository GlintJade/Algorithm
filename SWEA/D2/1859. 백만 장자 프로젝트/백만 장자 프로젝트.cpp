#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;
        
        vector<int> day;
        int val;
        for (int i = 0; i < N; i++) {
            cin >> val;
            day.push_back(val);
        }

        long long maxx = day[N - 1];
        long long buy = 0; //구매한 금액
        long long cnt = 0; //구매한 개수
        long long answer = 0; // (판매할 금액 x 구매한 개수) - 구매한 금액
        for (int i = N - 2; i >= 0; i--) {
            if (maxx < day[i]) {
                answer += (maxx * cnt) - buy;
                buy = 0;
                cnt = 0;
                maxx = day[i];
            }
            else {
                buy += day[i];
                cnt++;
            }
            
        }
        
        answer += (maxx * cnt) - buy;

        cout << "#" << test_case << ' ' << answer << '\n';
    }
    return 0;
}