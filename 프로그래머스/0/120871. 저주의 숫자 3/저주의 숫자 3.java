class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i=1; i<=n; i++){
            answer += 1;
            if(answer%3==0||Integer.toString(answer).contains("3")) i--;
        }
        
        return answer;
    }
}