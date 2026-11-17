#include <string>
#include <vector>
#include <climits>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    int maxx = INT_MIN;
    int minn = INT_MAX;
    vector<int> v;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' '){
            maxx = max(maxx, stoi(tmp));
            minn = min(minn, stoi(tmp));
            tmp = "";
            continue;
        }
        tmp += s[i];
    }
    maxx = max(maxx, stoi(tmp));
    minn = min(minn, stoi(tmp));
    
    answer = to_string(minn) + " " + to_string(maxx);
    
    return answer;
}