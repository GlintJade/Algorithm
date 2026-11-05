#include <iostream>
using namespace std;

int answer, n, m;

void func(int k) {
    if (k == m) return;

    answer *= n;
    func(++k);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int T;
    //cin >> T;
    for (int test_case = 1; test_case <= 10; test_case++) {
        int tc;
        cin >> tc;
        
        answer = 1;
        cin >> n >> m;
        func(0);

        cout << "#" << test_case << ' ' << answer<< '\n';
    }
    return 0;
}