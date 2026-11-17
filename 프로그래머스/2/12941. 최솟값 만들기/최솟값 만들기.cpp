#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    //명제 : 가장 작은 값과 가장 큰 값을 곱하는 게 최소 합이 된다.
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int size = A.size(); // A와 B의 길이가 같음.
    for(int i = 0; i<size; i++){
        answer += A[i] * B[size-1 -i];
    }

    return answer;
}