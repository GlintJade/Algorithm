#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int K;
vector<int> v[15];
int node[1200];

void func(int depth, int left, int right) {
    if (depth == K || left > right) {
        return;
    }

    int mid = (left + right) / 2;
    v[depth].push_back(node[mid]);

    func(depth + 1, left, mid-1);
    func(depth + 1, mid+1, right);
    
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> K;

        //초기화
        for (int i = 0; i < 15; i++) v[i].clear();
        memset(node, 0, sizeof(node));

        //입력받을 원소의 개수 -> 최대 1023개
        int cnt = 1;
        for (int i = 0; i < K; i++) cnt *= 2;
        cnt -= 1;

        for (int i = 0; i < cnt; i++) {
            cin >> node[i];
        }

        func(0, 0, cnt-1);

        cout << "#" << test_case << ' ';
        for (int i = 0; i < K; i++) {
            for (int j = 0; j < v[i].size(); j++) {
                cout << v[i][j] << ' ';
            }
            cout << '\n';
        }


    }
    return 0;
}