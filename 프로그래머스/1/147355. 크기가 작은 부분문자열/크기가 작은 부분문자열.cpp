#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int forcnt = t.length() - p.length() + 1;
    for(int i = 0; i<forcnt; i++)
        if(t.substr(i, p.length()) <= p) answer++;
    return answer;
}