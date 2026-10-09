#include <string>
#include <vector>
#include <math.h>

using namespace std;

int getGCD(int a, int b){
    return b == 0 ? a : getGCD(b, a%b);
}

vector<int> solution(int n, int m) {
    int gcd = getGCD(n, m);
    int lcm = (n/gcd) * m; //최소공배수 : (n x m) / GCD -> 오버플로우 방지용 : (n / GCD) x m
    return {gcd, lcm};
}