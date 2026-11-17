#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    //단어의 첫 문자를 대문자로 무조건 만들어도 됨.
    //공백을 만나면 다시 첫 문자를 대문자로 만들기
    bool first = false;
    s[0] = toupper(s[0]);
    for(int i = 1; i<s.length(); i++){
        if(s[i] == ' ') {
            first = true;
            continue;
        }
        if(first) {
            s[i] = toupper(s[i]);
            first = false;
            continue;
        }
        s[i] = tolower(s[i]);
        
    }
    
    
    return s;
}