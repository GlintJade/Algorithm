class Solution {
    public int solution(int i, int j, int k) {
        int answer = 0;
        String kstr = Integer.toString(k);
        for(int a = i; a<=j; a++){
            String astr = Integer.toString(a);
            String[] arr = astr.split("");
            if (astr.contains(kstr)) {
                for (String b : arr) {
                    if (b.equals(kstr)) answer++;
                }
            }
            
        }
        return answer;
    }
}