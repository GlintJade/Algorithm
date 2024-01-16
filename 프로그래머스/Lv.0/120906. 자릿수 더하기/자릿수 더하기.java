import java.util.*;
class Solution {
    public int solution(int n) {
        return Arrays.stream(String.valueOf(n).split("")).mapToInt(Integer::parseInt).sum();
    }
}
//int형 n의 각 자리 숫자들을 string으로 변환하고
//mapToInt를 통해 각 문자열을 정수로 변환
//sum메소드를 통해서 합을 구하기
