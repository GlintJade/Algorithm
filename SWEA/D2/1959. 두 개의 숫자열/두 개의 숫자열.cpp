#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, M;
        cin >> N >> M;
        
        vector<int> A(N), B(M);
        for(int i = 0; i<N; i++) cin >> A[i];
        for(int i = 0; i<M; i++) cin >> B[i];
        
        if(N < M) {
            swap(N, M);
            swap(A, B);
        }
        
        int sum = 0, maxx = INT_MIN;
        for(int i = 0; i <= N-M; i++) {
            for(int j = 0; j < M; j++) {
                sum += A[i+j] * B[j];
            }
            maxx = max(maxx, sum);
            sum =0;
        }
        
        cout << "#" << test_case << ' ' << maxx << '\n';
        
	}
	return 0;
}