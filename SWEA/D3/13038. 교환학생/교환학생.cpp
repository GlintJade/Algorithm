#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int test_case;
    int T;

    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;

        int day[7];
        int k = 0; //수업을 들을 수 있는 날
        for (int i = 0; i < 7; i++) {
            cin >> day[i];
            if (day[i] == 1) k++;
        }

        int weeks = (n - 1) / k;
        int answer = weeks * 7;
        int m = n - weeks * k;
        int plus = INT_MAX;

        for (int i = 0; i < 7; i++) {
            if (day[i] == 1) {
                int m2 = m;
                int c = 0;
                for (int j = i; j < i + 7; j++) {
                    c++;
                    if (day[j % 7] == 1) {
                        m2--;
                        if (m2 == 0) break;
                    }
                }
                plus = min(plus, c);
            }
        }


        cout << "#" << test_case << ' ' << answer + plus<< '\n';
    }

    return 0;
}