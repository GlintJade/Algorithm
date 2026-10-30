#include <bits/stdc++.h>
using namespace std;

int diag(int n) { //몇 번째 대각선에 해당하는지 반환하는 함수
    int answer = 0, minus = 1;
    while (n>0) {
        n -= minus;
        minus++;
        answer++;
    }
    return answer;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int p, q;
        cin >> p >> q; 
        // (1) p와 q의 값을 가지는 (x, y) 좌표 찾기

        int s1 = diag(p);
        int s2 = diag(q);

        //대각선의 시작하는 숫자 찾기
        int num1 = 1 + (s1 * (s1 - 1)) / 2;
        int num2 = 1 + (s2 * (s2 - 1)) / 2;
        
        //위치 찾기
        int locat1 = p - num1, locat2 = q - num2;

        //좌표 찾기
        int x1 = 1, y1 = s1, x2 = 1, y2 = s2;
        for (int i = 1; i <= locat1; i++) { x1++; y1--; }
        for (int i = 1; i <= locat2; i++) { x2++; y2--; }
        
        //x, y 좌표를 저장한 뒤, (x1 + x2), (y1 + y2) 좌표의 값을 반환
        int x3 = x1 + x2, y3 = y1 + y2;
        int s3 = x3 + y3 - 1;
        int num3 = 1 + (s3 * (s3 - 1)) / 2;

        int answer = num3;
        if (x3 > 1) {
            while (x3 > 1) {
                answer++;
                x3--;
            }
        }

        cout << "#" << test_case << ' ' << answer << '\n';
    }

    return 0;
}