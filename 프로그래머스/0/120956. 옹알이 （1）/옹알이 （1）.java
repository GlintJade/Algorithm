class Solution {
    public int solution(String[] babbling) {
        String[] arr = {"aya", "ye", "woo", "ma"};
        int answer = 0;
        for(String s : babbling){
            for(String a : arr){
                if(s.contains(a)){
                    s = s.replace(a, " ");
                }
            }
            if(s.trim().length()==0){
                answer++;
            }
        }
        return answer;
    }
}