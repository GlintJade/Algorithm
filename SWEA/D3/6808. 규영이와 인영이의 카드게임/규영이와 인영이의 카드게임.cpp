#include <bits/stdc++.h>
using namespace std;

int win, lose;
int allsum = 171;
int card[9]; //규영
int card2[9]; //인영
bool visited[9]; //인영 방문여부

void func(int depth, int sum) { //sum = 규영이의 점수합
    if (depth == 9) {
        int inysum = allsum - sum;
        if (sum > inysum) win++;
        else if (sum < inysum) lose++;
        return;
    }

    for (int i = 0; i < 9; i++) {
        if (!visited[i]) {
            visited[i] = true;
            int tmp = card[depth] + card2[i];
            if (card[depth] < card2[i]) func(depth + 1, sum);
            else func(depth + 1, sum + tmp);
            visited[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        memset(card, 0, sizeof(card));
        memset(card2, 0, sizeof(card));
        memset(visited, 0, sizeof(visited));
        win = 0, lose = 0;

        bool check[19] = { false };
        for (int i = 0; i < 9; i++) {
            cin >> card[i];
            check[card[i]] = true;
        }
        
        int index = 0;
        for (int i = 1; i <= 18; i++) {
            if (!check[i]) card2[index++] = i;
        }

        func(0, 0);
        
        cout << "#" << test_case << ' '  << win << ' ' << lose << '\n';
        
    }
    return 0;
}