#include <string>
#include <vector>

using namespace std;

int oneCnt(int n){
    int cnt = 0;
    while(n){
        if(n%2 == 1) cnt++;
        n/=2;
    }
    return cnt;
}

int solution(int n) {
    
    int cnt = oneCnt(n);
    
    while(true){
        if(cnt == oneCnt(++n)){
            return n;
        }
    }
    
}