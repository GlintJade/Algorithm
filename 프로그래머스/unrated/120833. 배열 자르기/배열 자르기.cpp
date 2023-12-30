#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    int max = num2-num1+1;
    for(int i=0; i<max; i++){
        answer.push_back(numbers[num1++]);
    }
    return answer;
}