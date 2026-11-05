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

        vector<int> v;
        int tmp;
        for (int i = 0; i < N; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }

        int com;
        cin >> com;
        char ch;
        int x, y, nm;
        for (int i = 0; i < com; i++) {
            cin >> ch;
            if (ch == 'I') {
                cin >> x >> y;
                for (int i = 0; i < y; i++) {
                    cin >> nm;
                    v.insert(v.begin() + x + i, nm);
                }
            }
            else if (ch == 'D') {
                cin >> x >> y;
                v.erase(v.begin() + x, v.begin() + x + y);
            }
            else if (ch == 'A') {
                cin >> y;
                for (int i = 0; i < y; i++) {
                    cin >> nm;
                    v.push_back(nm);
                }
            }
        }

        cout << "#" << test_case << ' ';
        for (int i = 0; i < 10; i++) cout << v.at(i) << ' ';
        cout << '\n';
    }
    return 0;
}