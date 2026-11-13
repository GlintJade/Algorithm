#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        int nlen = to_string(N).length();
        int arr[10] = { 0 };
        int tmp = N;
        while (tmp) {
            arr[tmp % 10]++;
            tmp /= 10;
        }

        string answer = "impossible";
        for (int i = 2; i <= 9; i++) {
            int val = N * i;
            int vallen = to_string(val).length();
            if (nlen != vallen) break;

            int arr2[10] = { 0 };
            while (val) {
                arr2[val % 10]++;
                val /= 10;
            }
            bool check = true;
            for (int i = 0; i < 10; i++) {
                if (arr[i] != arr2[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                answer = "possible";
                break;
            }
        }


        cout << "#" << test_case << ' '<< answer << '\n';
        
    }
    return 0;
}