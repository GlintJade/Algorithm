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
                if (!q.empty()) {
                    int front = q.top(); q.pop();
                    cout << front << ' ';
                }
                else {
                    cout << -1 << ' ';
                }
                
            }
        }

        cout << '\n';
        

    }
    return 0;
}