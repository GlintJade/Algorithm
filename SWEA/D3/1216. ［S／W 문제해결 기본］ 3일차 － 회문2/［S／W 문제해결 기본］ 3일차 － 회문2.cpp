#include <bits/stdc++.h>
using namespace std;

int findLen(const string str[]) {
    for (int len = 100; len > 0; len--) {
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= 100 - len; j++) {
                string str2 = str[i].substr(j, len);
                string rev = str2;
                reverse(rev.begin(), rev.end());
                if (rev == str2) return len;
            }
        }
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        int tc;
        cin >> tc;

        string str[100];
        for (int i = 0; i < 100; i++) cin >> str[i];

        int answer1 = findLen(str);
        
        string str2[100];
        for (int i = 0; i < 100; i++) str2[i] = str[i];
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                str2[i][j] = str[j][99 - i];
            }
        }

        int answer2 = findLen(str2);
        
        int answer = max(answer1, answer2);


        cout << "#" << tc << ' ' << answer << '\n';
    }
    return 0;
}