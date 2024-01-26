class Solution {
    public int solution(int a, int b) {
        int b1 = b / GCD(a, b);
        while( b1 != 1) {
            if(b1 % 2 == 0) b1/=2;
            else if (b1 % 5 == 0) b1 /= 5;
            else return 2;
        }
        return 1;
    }
    private int GCD(int a, int b) {
        return b==0?a : GCD(b, a%b);
    }
}