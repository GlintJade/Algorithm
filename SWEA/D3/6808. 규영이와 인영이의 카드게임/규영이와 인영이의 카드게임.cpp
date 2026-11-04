#include <bits/stdc++.h>
using namespace std;

int gyu[9];
int iny[9];
bool check[9];
int win, lose;

void func(int depth, int sum1, int sum2) { // sum1 규 , sum2 인
    if (depth == 9) {
        if (sum1 > sum2) win++;
        else if (sum1 < sum2) lose++;
        return;
    }

    for (int i = 0; i < 9; i++) { 
        if (!check[i]) {
            check[i] = true;
            if (gyu[depth] > iny[i]) func(depth + 1, sum1 + gyu[depth] + iny[i], sum2);
            else if (gyu[depth] < iny[i]) func(depth + 1, sum1, sum2 + gyu[depth] + iny[i]);
            check[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {

        memset(gyu, 0, sizeof(gyu));
        memset(iny, 0, sizeof(iny));
        win = 0; lose = 0;

        bool number[19] = { false };
        for (int i = 0; i < 9; i++) {
            cin >> gyu[i];
            number[gyu[i]] = true;
        }

        int index = 0;
        for (int i = 1; i <= 18; i++) {
            if (!number[i]) iny[index++] = i;
        }

        func(0, 0, 0);

        cout << "#" << test_case << ' ' << win << ' ' << lose << '\n';
    }
    return 0;
}