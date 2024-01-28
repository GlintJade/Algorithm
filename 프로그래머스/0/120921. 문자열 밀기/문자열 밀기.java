class Solution {
    public int solution(String A, String B) {
        int answer = 0;
        String an = A ;
        for(int i=0; i<A.length(); i++){
            if(an.equals(B)) return answer;
            an = A.charAt(A.length()-1) + A.substring(0, A.length()-1);
            answer++;
            A=an;
            System.out.println(an);
        }
        return -1;
    }
}