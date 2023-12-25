#include <string>
#include <vector>

using namespace std;

int solution(int n) { // 6*i%n==0, return i //i = result(피자 몇 판인지), n = 사람 수
    for(int i=1; i<n; i++){    //result가 n보다 작거나 같은 경우만 있음
        if(6*i%n==0) return i;
    }

}
//     if(n%6==0) return n/6;
//     else{
//         if(n%2==0) return n/2;
//         else{ //홀수일 때 최대공약수 있는 경우와 서로소인 경우
            
//         }
//     }