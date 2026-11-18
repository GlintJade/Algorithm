#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    sort(tangerine.begin(), tangerine.end());
    vector<int> v; //귤의 크기들을 저장
    int cnt = 1;
    for(int i =0; i<tangerine.size()-1; i++){
        if(tangerine[i] != tangerine[i+1]){
            v.push_back(cnt);
            cnt = 1;
            continue;
        }
        cnt++;
    }
    v.push_back(cnt);
    sort(v.rbegin(), v.rend());
    int index = 0;
    while(k > 0){
        k -= v[index++];
        answer++;
    }
    
    return answer;
}