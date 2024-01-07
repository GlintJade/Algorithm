#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    regex aeiou("[^0-9]+");
    my_string = regex_replace(my_string, aeiou, "");
    for(int i=0; i<my_string.length(); i++){
        if(isdigit(my_string[i])){answer.push_back(my_string[i]-48);}
    }
    sort(answer.begin(), answer.end());
    return answer;
}