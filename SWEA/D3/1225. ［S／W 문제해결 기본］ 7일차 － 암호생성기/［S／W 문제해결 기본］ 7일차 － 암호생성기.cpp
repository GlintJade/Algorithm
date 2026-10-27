#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int test_case = 1; test_case <= 10; test_case++) {
        int tc;
        cin >> tc;
        queue<int> q;

        int tmp;
        for (int i = 0; i < 8; i++) {
            cin >> tmp;
            q.push(tmp);
        }

        bool loopcheck = true;
        while (loopcheck) {
            int d = 1;
            for (int i = 0; i < 5; i++) {
                int front = q.front();
                q.pop();
                front -= d++;
                if (front <= 0) {
                    q.push(0);
                    loopcheck = false;
                    break;
                }
                q.push(front);
            }
        }
        cout << "#" << tc << ' ';
        for (int i = 0; i < 8; i++) {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << '\n';

    }

    return 0;
}