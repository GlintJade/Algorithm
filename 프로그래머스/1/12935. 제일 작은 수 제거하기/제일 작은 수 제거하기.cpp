#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min = 999999999;
    vector<int> answer;
    for(int i=0; i<arr.size(); i++) if(min > arr[i]) min = arr[i];
    for(int i =0; i<arr.size(); i++) {
        if(arr[i] == min) continue;
        answer.push_back(arr[i]);
    }
    if(answer.empty()) answer.push_back(-1);
    return answer;
}