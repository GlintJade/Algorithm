#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int K;
vector<int> node;
vector<int> tree[15];

void func(int depth, int first, int end) {
    if (depth == K) {
        return;
    }

    int mid = (first+end) / 2;
    tree[depth].push_back(node[mid]);

    func(depth + 1, first, mid - 1);
    func(depth + 1, mid + 1, end);
}

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> K;
        node.clear();
        for (int i = 0; i < 15; i++) tree[i].clear();

        int len = pow(2, K) - 1;
        int input;
        for (int i = 0; i < len; i++) {
            cin >> input;
            node.push_back(input);
        }

        func(0, 0, len-1);

        cout << "#" << test_case << ' ';
        for (int i = 0; i < K; i++) {
            for (int j = 0; j < pow(2, i); j++) {
                cout << tree[i][j] << ' ';
            }
            cout << '\n';
        }

    }
    return 0;
}