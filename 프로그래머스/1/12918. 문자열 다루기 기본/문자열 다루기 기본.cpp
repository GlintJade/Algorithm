#include <string>
#include <vector>

using namespace std;

bool lencheck(string s) {
    return s.length()==4 || s.length() == 6;
}

bool solution(string s) {
    if(!lencheck(s)) return false;
    for(char c : s) if(!isdigit(c)) return false;
    return true;
}