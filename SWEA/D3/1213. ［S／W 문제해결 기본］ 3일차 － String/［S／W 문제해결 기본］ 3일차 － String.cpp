#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        int tc;
        cin >> tc;

        string word;
        cin >> word;
        
        string str;
        cin >> str; 

        int answer = 0;
        int len = str.length() - word.length();
        
        for (int i = 0; i < len + 1; i++) {
            string tmp = str.substr(i, word.length());
            if (tmp == word) answer++;
        }

        cout << "#" << test_case << ' ' << answer << '\n';
    }
    return 0;
}