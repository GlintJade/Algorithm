#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
    
    string ans[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
    
	for (test_case = 1; test_case <= T; ++test_case) {
        int N, K; // N 학생수, K 학생 번호
        cin >> N >> K; 

        int a, b, c;  //중간고사, 기말고사, 과제
        double score[105];
        for (int i = 0; i < N; i++) {
            cin >> a >> b >> c; 
            score[i] = a * 0.35 + b * 0.45 + c * 0.2;
        }
        
        double kscore = score[K-1];
        sort(score, score + N, greater<>());
        int p = N / 10;

        cout << "#" << test_case << ' ';
        for (int i = 0; i < N; i++) {
            if (kscore == score[i]) {
                int idx = int(i / p);
                cout << ans[idx] << '\n';
                break;
            }
        }
	}

	return 0;
}