#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int j=2;
    while(n>1){
            if(n % j == 0){
            answer.emplace_back(j);
            while(n %j ==0){
                n/=j;
                }
            }
        j++;
        }
    return answer;
}