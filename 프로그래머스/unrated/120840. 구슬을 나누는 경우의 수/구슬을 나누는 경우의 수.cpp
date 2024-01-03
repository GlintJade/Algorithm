#include <string>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

cpp_int factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int solution(int balls, int share) { //n=balls, m=share
    cpp_int answer = factorial(balls) / (factorial(balls-share) * factorial(share));
    return static_cast<int>(answer);
}
