import java.util.*;
import java.util.Arrays;
class Solution {
    public int[] solution(int[] numlist, int n) {
        Integer[] arr = Arrays.stream(numlist).boxed().toArray(Integer[]::new); 
        Arrays.sort(arr, (num1, num2)->{
            if (Math.abs(num1-n) == Math.abs(num2-n)) {return num2 - num1;}
            return Integer.compare(Math.abs(num1-n), Math.abs(num2-n));
        });
        return Arrays.stream(arr).mapToInt(Integer::intValue).toArray();
    }
}
//큰 값 먼저

//Arrays.sort는 기본형 배열 불가능해서 Integer 배열을 사용해야 함.
//Arrays.sort는 void