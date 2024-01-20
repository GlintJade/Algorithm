import java.util.*;
class Solution {
    public int solution(int[] numbers) {
        Arrays.sort(numbers);
        int max1 = numbers[0]*numbers[1]; //음수가 있는 경우 음수끼리의 곱이 최댓값이 될 수 있으므로
        int max2 = numbers[numbers.length-1]*numbers[numbers.length-2];
        return Math.max(max1, max2);
    }
}