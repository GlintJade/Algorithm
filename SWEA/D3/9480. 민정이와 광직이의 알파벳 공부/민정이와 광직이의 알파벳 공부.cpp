#include <iostream>
#include <cstring>
using namespace std;

int N;
bool words[20][26]; //알파벳 소문자가 몇 개 있냐
bool visited[20];
int alphabet[26];
int answer;

void func(int depth) {
    if (depth == N) {
        bool check = true;
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) {
                check = false;
                break;
            }
        }
        if (check) answer++;
        return;
    }
    
    //현재 단어를 선택하지 않는 경우
    func(depth + 1);
    
    //현재 단어를 선택하는 경우
    for (int i = 0; i < 26; i++) {
        if (words[depth][i]) alphabet[i]++;
    }
    func(depth + 1);
    for (int i = 0; i < 26; i++) {
        if (words[depth][i]) alphabet[i]--;
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

        memset(words, false, sizeof(words));
        memset(visited, false, sizeof(visited));
        memset(alphabet, 0, sizeof(alphabet));
        answer = 0;

        string word;
        for (int i = 0; i < N; i++) {
            cin >> word;
            for (char c : word) {
                int val = c - 'a';
                words[i][val] = true;
            }
        }

        func(0);

        cout << "#" << test_case << ' ' << answer << '\n';

        


    }
    return 0;
}