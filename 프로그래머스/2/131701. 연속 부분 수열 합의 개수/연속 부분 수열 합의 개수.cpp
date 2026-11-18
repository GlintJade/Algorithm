#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> st;
    
    for(int len =1; len<=elements.size(); len++){
        for(int start = 0; start < elements.size(); start++){
            int sum = 0;
            for(int i = start; i<start+len; i++){
                sum += elements[i%elements.size()];
            }
            st.insert(sum);
        }
    }
    
    
    return st.size();
}