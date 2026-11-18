#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> st;
    
    int n = elements.size();
    for(int start = 0; start <n; start++){
        int sum = 0;
        for(int len = 1; len <= n; len++){
            sum += elements[(start + len) % n];
            st.insert(sum);
        }
    }
    
    
    return st.size();
}