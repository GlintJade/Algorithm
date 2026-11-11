#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    //int T;
    //cin >> T;
    for (test_case = 1; test_case <= 10; ++test_case) {
        int N;
        string str;
        cin >> N >> str;

        stack<char> s1;
        stack<char> s2;
        for (char c : str) s1.push(c);

        char top = s1.top();
        s1.pop();
        s2.push(top);
        while (!s1.empty()) {
            if (!s2.empty() && s1.top() == s2.top()) {
                s1.pop();
                s2.pop();
                continue;
            }
            
            top = s1.top();
            s1.pop();
            s2.push(top);
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