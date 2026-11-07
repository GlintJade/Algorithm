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
        cin >> N;

        vector<int> v;
        int password;
        for (int i = 0; i < N; i++) {
            cin >> password;
            v.push_back(password);
        }

        int command;
        cin >> command;
        char ch;
        int x, y, nm;
        for (int i = 0; i < command; i++) {
            cin >> ch >> x >> y;
            for (int j = 0; j < y; j++) {
                cin >> nm;
                v.insert(v.begin() + x+j, nm);
            }
        }

        cout << "#" << test_case << ' ';
        for (int i = 0; i < 10; i++) cout << v.at(i) << ' ';
        cout << '\n';


    }


    return 0;
}