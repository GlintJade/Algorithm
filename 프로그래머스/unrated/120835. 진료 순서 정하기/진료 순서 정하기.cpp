#include <string>
#include <vector>

using namespace std;
    //이중 for문 이용, 첫번째 원소를 기준으로 나머지 원소들과 비교
    //자신보다 더 큰 수가 있으면 count변수(1로 초기화됨)를 ++시켜서 
    //answer배열에 count를 push_Back해줌
vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int count = 1;
    for(int i=0; i<emergency.size(); i++){
        for(int j=0; j<emergency.size(); j++){
            if(emergency.at(i) < emergency.at(j)){
                count++;
            }
        }
        answer.push_back(count);
        count = 1;
    }
    return answer;
}