#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> s1, s2;
    for(int i = 0; i<s.length(); i++) s1.push(s[i]);
    
    int top = s1.top();
    s1.pop();
    s2.push(top);
    while(!s1.empty()){
        if(!s2.empty()){
            if(s1.top() == '(' && s2.top() == ')') {
                s1.pop(); s2.pop();
                continue;
            } 
        }
        top = s1.top();
        s1.pop();
        s2.push(top);
    }
    if(!s2.empty() || !s1.empty()) answer = false;

    return answer;
}