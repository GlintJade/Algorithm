#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pcnt = 0, ycnt = 0;
    for(char c : s){
        if(c == 'p' || c == 'P') pcnt++;
        else if (c=='y' || c == 'Y') ycnt++;
    }
    return pcnt == ycnt;
}