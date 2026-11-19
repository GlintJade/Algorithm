#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    int round = 0;
    while(n>1){
        n/=2;
        round++;
    }
    if(a > b) swap(a,b);
    int st = 1;
    while(round > 0){
        int mid = pow(2, round - 1);
        if(a <= st + mid -1 && b > st + mid -1) return round;
        if (a > st + mid -1 && b > st + mid -1) st = st + mid;
        round--;
    }

    return answer;
}