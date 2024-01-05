#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    // a= 가로/n, b= 세로/n c = 높이/n ->a*b*c
    int a, b ,c;
    a = box[0]/n; b = box[1]/n; c = box[2]/n;
    return a*b*c;
}