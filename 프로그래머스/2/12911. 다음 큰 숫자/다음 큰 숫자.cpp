#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string binary = "";
    //맨 뒤에서부터 발견된 1덩어리에서, 맨 앞의 1을 한 칸 앞으로 전진
    //뒤의 나머지 1들을 전부 뒤로 이동
    while(n){
        binary += (n%2) +'0';
        n/=2;
    }
    
    reverse(binary.begin(), binary.end());
    
    //1로만 구성된 경우를 방지
    binary = "0" + binary;
    
    //01구간 발견
    int idx = 0;
    for(int i = binary.length()-1; i>=1; i--){
        if(binary[i-1] == '0' && binary[i] == '1'){
            binary[i-1] = '1';
            binary[i] = '0';
            idx = i;
            break;
        }
    }
    
    int cnt = 0;
    for(int i = idx; i < binary.length(); i++){
        if(binary[i] == '1') {
            cnt++;
            binary[i] = '0';
        }
    }
    
    int st = binary.length() -1;
    for(int i = st; i> st - cnt; i--){
        binary[i] = '1';
    }
    
    // 2진수 → 10진수
    int answer = 0;

    for (char c : binary) {
        answer = answer * 2 + (c - '0');
    }
    
    
    return answer;
}