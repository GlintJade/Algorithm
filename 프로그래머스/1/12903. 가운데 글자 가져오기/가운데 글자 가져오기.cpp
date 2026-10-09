#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    answer = len % 2 == 0 ? s.substr((len/2) -1, 2) : s.substr(len/2, 1); 
    //str.substr(시작인덱스, 자를길이);
    return answer;
}