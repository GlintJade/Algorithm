#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case;

    int T;
    cin >> T;
    string exam = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
     for (test_case = 1; test_case <= T; ++test_case) {
         string encoding;
         cin >> encoding;

         string two;
         for (char c : encoding) {
             int index = exam.find(c);
             for (int i = 5; i >= 0; i--) { //6비트씩 이진수로 변환
                 int e = (index >> i) & 1;
                 two += (e == 1 ? '1' : '0');
             }
         }

         string answer = "";
         for (int i = 0; i < two.size(); i+=8) {
             string tmp = two.substr(i, 8);
             int decimal = stoi(tmp, nullptr, 2); //2진수 문자열 -> 10진수 정수로 변환
             answer += (char)decimal;
         }

         cout << "#" << test_case  << ' ' << answer << '\n';
         
    } 


    return 0;
}