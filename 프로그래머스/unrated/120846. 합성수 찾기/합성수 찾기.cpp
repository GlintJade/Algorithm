#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count=0, answer=0;
    //n의 값을 1부터 n까지의 수로 나눈 나머지가 0일 때 -> 나누어떨어진다. //count++
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0){count++;}
        }
        if(count>=3){answer++; }
        count=0;
    }
    return answer;
}