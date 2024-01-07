#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string) {
    vector<int> answer;
    int a = 0;
    for(int i=0; i<my_string.length(); i++){
        if(isdigit(my_string[i])){answer.push_back(my_string[i]-48);}
    }
    for(int i=0; i<answer.size(); i++){
        a += answer[i];
    }
    
    return a;
}