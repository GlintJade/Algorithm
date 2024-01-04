#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(int i=0; i<num_list.size()/n; i++){
        vector<int> a;
        for(int j=0; j<n; j++){
            a.push_back(num_list.at(i*n+j)); //j만 하면 0 ~ n값만 반복적으로 들어가므로 바꿔야하는데
        }
        answer.push_back(a);
    }
    return answer;
}
// num_list = [1, 2, 3, 4, 5, 6, 7, 8] / n = 2 / size = 8
// 0 1 / 2 3 / 4 5 / 6 7 
// i*n+j
// i=0 이면 n=2 j= 0, 1 
// i=1이면 n=2 j=2, 3