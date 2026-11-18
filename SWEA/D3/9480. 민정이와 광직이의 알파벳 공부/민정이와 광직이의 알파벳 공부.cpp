#include <iostream>
#include <vector>
using namespace std;

int N;
vector<string> words;
int answer;
int alphabet[26];

void func(int depth) {
    if (depth == N) {
        bool check = true;
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) check = false;
        }
        if (check) answer++;
        return;
    }
    
    //선택하지 않는 경우
    func(depth + 1);

    //선택하는 경우
    for (char c : words[depth]) {
        alphabet[c - 'a']++;
    }
    func(depth + 1);
    for (char c : words[depth]) {
        alphabet[c - 'a']--;
    }
}

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N;
        words.clear();
        answer = 0;
        fill(alphabet, alphabet + 26, 0);
        string word;
        for (int i = 0; i < N; i++) {
            cin >> word;
            words.push_back(word);
        }

        func(0);

        cout << "#" << test_case << ' ' << answer << '\n';
    }

    return 0;
}