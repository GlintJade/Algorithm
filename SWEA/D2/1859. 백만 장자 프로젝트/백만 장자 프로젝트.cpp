#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int test_case;
    int T;
    cin >> T;

   
    for (test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;

        vector<int> day;
        int input;
        for (int i = 0; i < N; i++) {
            cin >> input;
            day.push_back(input);
        }

        int maxx = day[N - 1]; 
        long long answer = 0;
        for (int i = N - 2; i >= 0; i--) {
            if (maxx < day[i]) {
                maxx = day[i];
                continue;
            }
            answer += (maxx - day[i]);
        }
        
        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}