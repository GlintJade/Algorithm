#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1, sum=1;
    while(1){
        sum*=answer;
        if(sum>n) break;
        answer++;
    }
    answer--;
    return answer;
}
// n = 2~5 answer=2 -> 2로 나눴을 때 3이 안됌. 2가 반환
// n = 6~23 answer=3 ->6으로 나눴을 때 4가 안됌. 3이 반환
// n=24, 4!(24) answer=4