#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    string onestr = s;
    int trans_cnt = 0;
    int remove_cnt = 0;
    while(onestr != "1"){
        //onestr의 모든 0 제거후 tmp에 저장
        string tmp = "";
        for(int i = 0; i<onestr.length(); i++){
            if(onestr[i] == '0' ) remove_cnt++;
            else tmp += onestr[i];
        }
        
        //tmp의 길이를 이진법으로 변환
        int len = tmp.length();
        tmp = "";
        while(len){
            tmp += (len%2) + '0';
            len /=2;
        }
        reverse(tmp.begin(), tmp.end());
        trans_cnt++;
        onestr = tmp;
    }
    
    answer.push_back(trans_cnt);
    answer.push_back(remove_cnt);
    
    
    return answer;
}