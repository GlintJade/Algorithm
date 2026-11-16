#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, M;
        cin >> N >> M;

        string answer = "OFF";
        int cnt = 0;

        bool isNbit = true;
        for (int i = 0; i < N; i++) {
            if (M % 2 != 1) {
                isNbit = false;
                break;
            }
            M /= 2;
        }
        if (isNbit) answer = "ON";

        cout << "#" << test_case << ' '  << answer << '\n';


    }
    return 0;
}