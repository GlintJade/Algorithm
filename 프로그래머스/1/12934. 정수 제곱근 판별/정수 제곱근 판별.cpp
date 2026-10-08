#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long r = sqrt(n);
    if(r * r == n) return (r+1) * (r+1);
    else return -1;
}