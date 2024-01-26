class Solution {
    public int solution(int[][] lines) {
        int answer = 0;
        int[] array = new int[200];
        for(int i=0; i<lines.length; i++){
            for(int j=lines[i][0]+100; j<lines[i][1]+100; j++){ //음수가 나올 수 있으므로 +100
                array[j]++; //겹치는 부분은 2 이상이 됨.
            }
        }
        for(int i=0; i<200; i++){
            if(array[i]>1) answer++;
        }
        return answer;
    }
}