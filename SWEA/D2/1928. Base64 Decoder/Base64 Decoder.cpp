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

    string ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (test_case = 1; test_case <= T; ++test_case) {
        string encoding;
        cin >> encoding;

        //6비트씩 encoding된 string을 이진수로 변환
        string two = "";
        for (char c : encoding) {
            int index = ch.find(c);
            two += bitset<6>(index).to_string();
        }

        //이진수로 변환된 string을 8비트씩 나누기 + 비트에 해당하는 아스키코드 값 변환
        string answer = "";
        for (int i = 0; i < two.length(); i += 8) {
            string tmp = two.substr(i, 8);
            int num = stoi(tmp, nullptr, 2);
            answer += (char)num;
        }
        
        cout << "#" << test_case << ' ' << answer << '\n';

    }
    return 0;
}