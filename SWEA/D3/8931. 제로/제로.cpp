#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int K;
        cin >> K;

        stack<int> st;

        int tmp;
        for (int i = 0; i < K; i++) {
            cin >> tmp;
            if (tmp != 0) {
                st.push(tmp);
            }
            else {
                st.pop();
            }
        }

        long long sum = 0;
        while (!st.empty()) {
            int val = st.top();
            sum += val;
            st.pop();
        }
        
        cout << "#" << test_case << ' ' << sum << '\n';


    }
    return 0;
}