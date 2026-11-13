#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        string s1, s2;
        cin >> s1 >> s2;
        
        string word[4] = { "", "CEFGHIJKLMNSTUVWXYZ", "ADOPQR", "B" };
        int cnt[12] = { 0 };
        int cnt2[12] = { 0 };
        int index = 0;
        for (char c : s1) {
            
            for (int i = 1; i <= 3; i++) {
                for (char c2 : word[i]) {
                    if (c == c2) cnt[index++] = i;
                }
            }
        }
        index = 0;
        for (char c : s2) {

            for (int i = 1; i <= 3; i++) {
                for (char c2 : word[i]) {
                    if (c == c2) cnt2[index++] = i;
                }
            }
        }

        string answer = "SAME";
        for (int i = 0; i < 12; i++) {
            if (cnt[i] != cnt2[i]) {
                answer = "DIFF";
                break;
            }
        }
        
        cout << "#" << test_case << ' ' << answer << '\n';


    }
    return 0;
}