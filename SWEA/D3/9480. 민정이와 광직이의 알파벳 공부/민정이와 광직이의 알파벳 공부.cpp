#include <iostream>
#include <cstring>
using namespace std;

string words[20];
int word[26];
int answer;
int N;

void func(int depth) {
    if (depth == N) {
        bool check = true;
        for (int i = 0; i < 26; i++) {
            if (!word[i]) {
                check = false;
                break;
            }
        }
        if (check) {
            answer++;
        }
        return;
    }
    
    string nowword = words[depth];
    //선택하지 않는 경우
    func(depth + 1);

    //선택하는 경우
    for (char c : nowword) {
        word[c - 'a']++;
    }
    func(depth + 1);
    for (char c : nowword) {
        word[c - 'a']--;
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N;

        memset(word, 0, sizeof(word)); 
        answer = 0;

        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }

        func(0);

        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}