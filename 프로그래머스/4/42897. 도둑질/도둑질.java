import java.util.*;
class Solution {
    public int solution(int[] money) {
        int[] dp1 = new int[money.length]; // 첫번째 집을 털 때
        int[] dp2 = new int[money.length]; // 첫번째 집을 털지 않을 때
        dp1[0] = 0;
        dp1[1] = money[0];
        dp1[2] = Math.max(money[0],money[1]);
        dp2[0]=0;
        dp2[1]=money[1];
        dp2[2]=Math.max(money[1], money[2]);
        for(int i=3; i<money.length; i++){ //house>=3
            dp1[i]=Math.max(dp1[i-1], dp1[i-2]+money[i-1]);
            dp2[i]=Math.max(dp2[i-1], dp2[i-2]+money[i]);
        } 
        return Math.max(dp1[money.length-1], dp2[money.length-1]);
    }
}