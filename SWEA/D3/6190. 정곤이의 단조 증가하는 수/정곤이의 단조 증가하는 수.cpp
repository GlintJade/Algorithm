#include <bits/stdc++.h>
using namespace std;

bool check(int num) {
    if (num <= 10) return false; //10이하는 단조 증가하는 수가 아님.
    int arr[15], index = 0;
    while (num) { //뒷자리부터 인덱스 0부터 넣어놓음
        arr[index++] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < index-1; i++) {
        if (arr[i] < arr[i + 1]) return false;
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int N;
        cin >> N;

        int arr[1005];
        for (int i = 0; i < N; i++) cin >> arr[i];

        int tmp, maxx = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                tmp = arr[i] * arr[j];
                if (check(tmp)) maxx = max(maxx, tmp);
            }
        }
        int answer = maxx == 0 ? -1 : maxx;
        cout << "#" << test_case << ' ' << answer <<'\n';
    }
    return 0;
}