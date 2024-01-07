#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(string my_string) {
    regex aeiou("[aeiou]+");
    string answer = regex_replace(my_string, aeiou, "");
    // for(int i=0; i<my_string.length(); i++){
    //     if(my_string[i] != 'a'&& my_string[i] != 'e'&& my_string[i] != 'i'&&my_string[i] != 'o'&&my_string[i] != 'u'){
    //         answer += my_string[i];
    //     }
    // }
    return answer;
}
