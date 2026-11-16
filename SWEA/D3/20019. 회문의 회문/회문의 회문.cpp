#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string s;
        cin >> s;

        string s2 = s;
        int len = s2.length();
        reverse(s2.begin(),s2.end());

        string answer = "NO";
        if (s2 == s) {
            int first = ((len - 1) / 2) - 1;
            int end = ((len - 1) / 2) + 1;
            string firststr = "";
            for (int i = 0; i <= first; i++) {
                firststr += s[i];
            }
            string firststr2 = firststr;
            reverse(firststr2.begin(), firststr2.end());
            if (firststr == firststr2) {
                firststr = "";
                for (int i = end; i < len; i++) {
                    firststr += s[i];
                }
                firststr2 = firststr;
                reverse(firststr2.begin(), firststr2.end());
                if (firststr == firststr2) answer = "YES";
            }
        }
        

        cout << "#" << test_case << ' '  << answer << '\n';

        


    }
    return 0;
}