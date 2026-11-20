#include <iostream>
#include <vector>
using namespace std;

int K;
int len;
vector<int> tree[10];
int node[1200];

void func(int depth, int st, int end) {
    if (depth == K) {
        return;
    }
    
    int mid = (st + end) / 2;
    tree[depth].push_back(node[mid]);
    func(depth + 1, st, mid - 1);
    func(depth + 1, mid + 1, end);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> K;
        len = (1 << K) - 1;
        for (int i = 0; i < 10; i++) tree[i].clear();

        for (int i = 0; i < len; i++) {
            cin >> node[i];
        }

        func(0, 0, len - 1);

        cout << "#" << test_case << ' ';
        for (int i = 0; i < K; i++) {
            for (int j = 0; j < tree[i].size(); j++) {
                cout << tree[i][j] << ' ';
            }
            cout << '\n';
        }

    }
    return 0;
}