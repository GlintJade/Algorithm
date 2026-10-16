#include<bits/stdc++.h>

using namespace std;

vector<int> v;
int len;
int answer;
set<string> visited[11];

void func(int cnt) { //변경횟수 cnt
    if (cnt == 0) {
        string s = "";
        for (int i = 0; i < len; i++) s += (v[i] + '0');
        answer = max(answer, stoi(s));
        return;
    }

    string s = "";
    for (int i = 0; i < len; i++) s += (v[i] + '0');
    if (visited[cnt].count(s)) return;
    visited[cnt].insert(s);


    for (int i = 0; i < len-1; i++) {
        for (int j = i + 1; j < len; j++) {
            swap(v[i], v[j]);
            func(cnt-1);
            swap(v[i], v[j]);
        }
    }


}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
         string num_str;
         int cnt;
         cin >> num_str >> cnt;

         answer = 0;
         len = num_str.length();
         for (int i = 0; i <= 10; i++) {
             visited[i].clear();
         }

         v.resize(len);
         for (int i = 0; i < len; i++) {
             v[i] = num_str[i] - '0';
         }

         func(cnt);

         cout << "#" << test_case << ' ' << answer << '\n';
	}

	return 0;
}