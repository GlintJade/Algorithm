#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int n, m;
        cin >> n >> m;

        int charge[105]; //i번째 주차 공간의 단위 무게당 요금
        for (int i = 1; i <= n; i++) cin >> charge[i]; 

        int weight[2005]; //차량 i의 무게
        for (int i = 1; i <= m; i++) cin >> weight[i];

        int arr[4005]; //주차 및 출차 현황
        int result = 0; //총 수입
        queue<int> delay; //딜레이된 차
        int status[105] = { 0 }; //주차 상태

        for (int i = 1; i <= 2 * m; i++) {
            cin >> arr[i]; 
            if (arr[i] > 0) { //주차장에 차 들어옴.
                bool check = false;
                for (int j = 1; j <= n; j++) {
                    if (status[j] == 0) {
                        status[j] = arr[i];
                        result = result + (charge[j] * weight[arr[i]]);
                        check = true;
                        break;
                    }
                }
                if (!check) delay.push(arr[i]);
            }
            else { //차가 빠짐
                for (int j = 1; j <= n; j++) {
                    if (status[j] == abs(arr[i])) {
                        status[j] = 0;
                        break;
                    }
                }
                //대기중이던 차가 있다면 먼저 놓기
                if (!delay.empty()) {
                    for (int j = 1; j <= n; j++) {
                        if (status[j] == 0) {
                            int front = delay.front(); delay.pop();
                            status[j] = front;
                            result = result + (charge[j] * weight[front]);
                            break;
                        }
                    }
                }
                
            }
        }

        cout << "#" << test_case << ' ' << result << '\n';

    }


    return 0;
}