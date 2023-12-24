#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    int answer = array.at(array.size()/2);
    return answer;
}