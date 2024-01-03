#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}
string solution(string letter) {
    string answer="";
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> letters = split(letter, ' ');
        
    vector<int> index;
    for(int i=0; i<letters.size(); i++){
        for(int j=0; j<morse.size(); j++){
            if(letters[i] == morse[j]){index.push_back(j);}
        }
    }
    for(int i=0; i<index.size(); i++){
        answer += index[i]+97;
    }
    
    return answer;
}