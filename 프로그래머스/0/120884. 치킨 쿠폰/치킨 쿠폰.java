class Solution {
    public int solution(int chicken) {
        int answer =0;
        int coupon =0;
        int temp = 0;
        while(chicken!=0){
            coupon += chicken%10; 
            answer += chicken/=10;
        }
        while(coupon>=10){//108개 -> 116개
            answer += coupon/10;
            temp += coupon%10; 
            coupon/=10;
            coupon+=temp;
            temp=0;
        }
        
        return answer;
    }
}