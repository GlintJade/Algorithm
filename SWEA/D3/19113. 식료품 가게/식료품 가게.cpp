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

        int shop[205] = { 0 };
        bool check[205] = { false };
        int len = 2 * N;
        for (int i = 0; i < len; i++) {
            cin >> shop[i];
        }

        vector<int> sale;
        for (int i = 0; i < len; i++) {
            if (!check[i]) {
                sale.push_back(shop[i]);
                check[i] = true;
                int origin = shop[i] + shop[i] / 3;
                for (int j = i; j < len; j++) {
                    if (!check[j] && shop[j] == origin) {
                        check[j] = true;
                        break;
                    }
                }
            }
        }


        cout << "#" << test_case << ' ';
        for (int i = 0; i < sale.size(); i++) cout << sale[i] << ' ';
        cout << '\n';

    }
    return 0;
}