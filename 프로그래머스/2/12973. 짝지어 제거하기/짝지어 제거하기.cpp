#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    
    stack<char> s1;
    for(int i = 0; i<s.length(); i++){
        if(!s1.empty() && s1.top() == s[i]) s1.pop();
        else s1.push(s[i]);
    }
    
    if(s1.empty()) answer = 1;

    return answer;
}