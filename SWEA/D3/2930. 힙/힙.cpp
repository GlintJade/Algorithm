#include <queue>
#include <iostream>
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

        int command, num;
        priority_queue<int> q;
        cout << "#" << test_case << ' ';
        for (int i = 0; i < N; i++) {
            cin >> command;
            if (command == 1) {
                cin >> num;
                q.push(num);
            }
            else {
                if (q.empty()) {
                    cout << -1 << ' ';
                }
                else {
                    int top = q.top(); q.pop();
                    cout << top << ' ';
                }
                
            }
        }

		cout << '\n';
        


    }
    return 0;
}