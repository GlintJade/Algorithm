#include <bits/stdc++.h>
using namespace std;

int N, idx; //idx이자 N의 길이
int arr[10];
int minn, maxx;

void func(int st) {
    for (int i = st+1; i < idx; i++) {
        swap(arr[st], arr[i]);
        if (arr[0] == 0) {
            swap(arr[i], arr[st]);
            continue;
        }
        string s;
        for (int i = 0; i < idx; i++) s += to_string(arr[i]);
        int v = stoi(s);
        minn = min(minn, v);
        maxx = max(maxx, v);
        swap(arr[i], arr[st]);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> N;

        memset(arr, 0, sizeof(arr));
        minn = INT_MAX;
        maxx = INT_MIN;

        idx = 0;
        int len = N;
        while (len > 0) {
            arr[idx] = (len % 10);
            idx++;
            len /= 10;
        }

        reverse(arr, arr + idx);

        minn = min(minn, N);
        maxx = max(maxx, N);
        
        for (int i = 0; i < idx; i++) {
            func(i);
        }


        cout << "#" << test_case << ' ' << minn << ' ' << maxx << '\n';
    }
    return 0;
}