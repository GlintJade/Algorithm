#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown + yellow;
    for(int i = 3; i<= total/2; i++) {
        if(total % i==0){
            int width = total/i;
            int height = i;
            if((width-2)*(height-2) == yellow){
                return {width, height};
            }
        }
    }
    return answer;
}