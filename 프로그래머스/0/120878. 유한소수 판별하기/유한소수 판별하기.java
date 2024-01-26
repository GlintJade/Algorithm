class Solution {
    public int solution(int a, int b) {
        // Long answer = 
        
        long x = ((a*1000000000L)%b == 0) ? 1L : 2L;
        int answer = Long.valueOf(x).intValue();
        return answer;
        // int b1 = b / GCD(a, b);
        // while ( b1 != 1) {
        //     if(b1 % 2 == 0) b1/=2;
        //     else if (b1 % 5 == 0) b1 /= 5;
        //     else return 2;
        // }
        // return 1;
    }
    // private int GCD(int a, int b) {
    //     return b==0?a : GCD(b, a%b);
    // }
}