#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
    for (test_case = 1; test_case <= 10; ++test_case) {
        int N;
        cin >> N;

        stack<char> s1, s2;
        char input;
        for (int i = 0; i < N; i++) {
            cin >> input;
            s1.push(input);
        }

        char top = s1.top();
        s1.pop();
        s2.push(top);
        while (!s1.empty()) {
            if (!s2.empty() && s1.top() == s2.top()) {
                s1.pop(); s2.pop();
                continue;
            }
            top = s1.top();
            s1.pop();
            s2.push(top);
        }

        cout << "#" << test_case << ' ';
        while (!s2.empty()) {
            top = s2.top(); s2.pop();
            cout << top;
        }
        cout << '\n';

    }
    return 0;
}