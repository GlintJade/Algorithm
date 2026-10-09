#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    long long numm = num;
    int answer = 0;
    if(numm == 1) return 0;
    for(int i = 0; i<500; i++){
        if(numm == 1) break;
        if(numm%2==0) numm /= 2;
        else numm = (numm*3) +1;
        answer++;
    } 
    if(answer == 500) return -1;
    return answer;
}