#include <string>
#include <vector>
#include <math.h>

using namespace std;

int getGCD(int a, int b){
    return b == 0 ? a : getGCD(b, a%b);
}

vector<int> solution(int n, int m) {
    int gcd = getGCD(n, m);
    int lcm = (n/gcd) * m;
    return {gcd, lcm};
}