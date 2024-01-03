#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, M, count;
    cin >> N >> M;
    map<string, string> z;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        z.insert({ s, "a" });
    }
    map<string, string> x;
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