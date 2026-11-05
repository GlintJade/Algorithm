#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        int N, M;
        cin >> N;
        
        vector<int> secret;
        int tmp;
        for (int i = 0; i < N; i++) {
            cin >> tmp;
            secret.push_back(tmp);
        }

        cin >> M;
        char ch;
        int x, y, num;
        for (int i = 0; i < M; i++) {
            cin >> ch >> x >> y;
            for (int i = 0; i < y; i++) {
                cin >> num;
                secret.insert(secret.begin() + x + i, num);
            }
        }


        cout << "#" << test_case << ' ';
        for (int i = 0; i < 10; i++) {
            cout << secret.at(i) << ' ';
        }
        cout << '\n';
    }
    return 0;
}