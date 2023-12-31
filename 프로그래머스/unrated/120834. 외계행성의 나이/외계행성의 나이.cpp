#include <string>
#include <iostream>
using namespace std;
//int형 숫자들을 아스키코드 변환을 통해 소문자로 바꾸기

string solution(int age) {
    string age2 = to_string(age);
    string answer = "";
    for(int i=0; i<age2.size(); i++){
        answer += age2[i] +49;
    }
    return answer;
}
