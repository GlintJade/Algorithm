#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    regex number("[^0-9]+");
    my_string = regex_replace(my_string, number, "");
    for(int i=0; i<my_string.length(); i++){
        if(isdigit(my_string[i])){answer += (my_string[i]-48);}
    }
    return answer;
}