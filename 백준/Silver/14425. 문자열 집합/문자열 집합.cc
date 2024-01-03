#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, count;
    cin >> N >> M;
    map<string, string> z;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        z.insert({ s, "a" });
    }
    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        if (z.find(s) != z.end()) {
            count++;
        }
    }
    cout << count;
    return 0;
}