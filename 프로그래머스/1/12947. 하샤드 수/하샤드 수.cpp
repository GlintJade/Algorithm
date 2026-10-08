#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int xx = x, sum = 0;
    while(x){
        sum += x %10;
        x/=10;
    }
    return xx % sum ? false : true;
}