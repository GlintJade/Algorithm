#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    
    stack<char> s1, s2;
    for(int i = 0; i<s.length(); i++){
        s1.push(s[i]);
    }
    
    char top = s1.top();
    s1.pop();
    s2.push(top);
    while(!s1.empty()){
        if(!s2.empty() && s1.top() == s2.top()){
            s1.pop(); s2.pop();
            continue;
        }
        top = s1.top();
        s1.pop();
        s2.push(top);
    }
    
    if(s2.empty()) answer = 1;

    return answer;
}