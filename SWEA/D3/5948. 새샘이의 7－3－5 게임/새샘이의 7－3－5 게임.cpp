#include <bits/stdc++.h>
using namespace std;

int arr[7];
vector<int> v;

void func(int st, int depth, int sum) {
    if (depth == 3) {
        v.push_back(sum);
        return;
    }

    if (st == 7) return;

    for (int i = st; i < 7; i++) {
        func(i + 1, depth + 1, sum + arr[i]);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        memset(arr, 0, sizeof(arr));
        v.clear();

        for (int i = 0; i < 7; i++) cin >> arr[i];

        func(0, 0, 0);

        sort(v.begin(), v.end(), greater<>());
        unique(v.begin(), v.end());

        cout << "#" << test_case << ' ' << v[4]  << '\n';

    }


    return 0;
}