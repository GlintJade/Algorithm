#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int j=1; j<n+1; j++){
        if(j%2!=0) answer.push_back(j);
    }
    return answer;
}