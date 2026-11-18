#include <string>
#include <vector>

using namespace std;

long long gcd(long long a, long long b){
    while(b!=0){
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

long long solution(vector<int> arr) {
    if(arr.size() == 1) return arr[0];
    long long answer = lcm(arr[0], arr[1]);
    for(int i = 2; i<arr.size(); i++){
        answer = lcm(answer, arr[i]);
    }
    return answer;
}