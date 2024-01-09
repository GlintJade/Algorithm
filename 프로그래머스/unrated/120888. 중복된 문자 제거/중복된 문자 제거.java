class Solution {
    public String solution(String my_string) {
        String answer = "";
        for(int i=0; i<my_string.length(); i++){
            if(my_string.indexOf(my_string.charAt(i)) == i){
                answer += my_string.charAt(i);
            }
            else{
                System.out.println(my_string.indexOf(my_string.charAt(i)));
            }
            // i=0이면 p의 인덱스 0 // i=1이면 e의 인덱스 1 // i=2이면 o의 인덱스 2 // i=3이면 p의 인덱스 0
        }
        return answer;
    }
}
//indexOf() 메소드는 특정 문자열의 위치를 찾고자 할 때 사용하는데, 주어진 문자열이 시작되는 인덱스 값을 리턴한다.
//따라서 my_string.charAt(i)의 인덱스 값이 i와 일치한다면, 그 문자는 앞에 있는 문자들과 중복되지 않았음을 의미하므로 answer에 추가해준다.