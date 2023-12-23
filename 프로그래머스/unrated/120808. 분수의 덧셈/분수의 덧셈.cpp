#include <vector>
using namespace std;
vector<int> solution(int numer1, int denom1, int numer2, int denom2) { 
    vector<int> answer; // 두 분수를 더한 값의 분자는 인덱스 0, 분모는 1로 
    int numer3 = numer1*denom2 + numer2*denom1;
    int denom3 = denom1*denom2;
    int com = 0; //최대공약수
    for(int i=1; i<=numer3; i++){ //denom3와 numer3의 차이X
        if(numer3%i==0&&denom3%i==0) com=i;
    }
    answer.push_back(numer3/com);
    answer.push_back(denom3/com);
    return answer;
}