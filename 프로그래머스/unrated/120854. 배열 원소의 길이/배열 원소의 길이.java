class Solution {
    public int[] solution(String[] strlist) {
        int[] answer = new int[strlist.length]; //배열 크기 선언 필수
        for(int i=0; i<strlist.length; i++){
            answer[i] = strlist[i].length();
        }
        return answer;
    }
}
//ArrayIndexOutOfBoundsException 오류
//answer 배열 초기화는 했으나 크기 선언이 되지 않아 오류 발생.