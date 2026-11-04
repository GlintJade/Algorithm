#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        int N;
        cin >> N;
        stack<char> s1, s2;
        string str;
        cin >> str;

        for (int i = 0; i < str.length(); i++) {
            s1.push(str[i]);
        }

        int tmp;
        while (!s1.empty()) {
            if (!s2.empty() && s1.top() == s2.top()) { //연속한 것을 발견
                s1.pop();
                s2.pop();
                continue;
            }
            tmp = s1.top(); s1.pop();
            s2.push(tmp);
        }

        cout << "#" << test_case << ' ';
        while (!s2.empty()) {
            cout << s2.top();
            s2.pop();
        }
        cout << '\n';
    }
    return 0;
}