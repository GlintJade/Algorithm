#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) { //양꼬치 n인분, 음료수 k개 / 얼마지불 answer
    if(n/10!=0) k = k-n/10;
    return 12000*n+2000*k;
}