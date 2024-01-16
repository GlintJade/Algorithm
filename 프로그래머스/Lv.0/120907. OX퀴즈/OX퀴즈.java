class Solution {
    public String[] solution(String[] quiz) {
        String[] answer = new String[quiz.length];
        for(int i=0; i<quiz.length; i++){
            String[] str = quiz[i].split(" ");
            if(str[1].equals("+")){
                answer[i] = ((Integer.parseInt(str[0]) + Integer.parseInt(str[2]))==Integer.parseInt(str[4]))? "O" : "X";
            }
            else if (str[1].equals("-")){
                answer[i] = ((Integer.parseInt(str[0]) - Integer.parseInt(str[2]))==Integer.parseInt(str[4])) ? "O" : "X";
            }
        }
        return answer;
    }
}
//숫자들을 int형으로 변환
//연산자 +, -와 =이 나올 때 1,2를 3과 비교
//숫자 앞에 -가 있으면 음수인 걸로 변환
