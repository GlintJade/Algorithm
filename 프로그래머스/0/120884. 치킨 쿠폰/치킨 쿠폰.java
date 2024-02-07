class Solution {
    public int solution(int chicken) {
//         int answer =0;
//         int coupon =0;
//         int temp = 0;
//         while(chicken!=0){ //치킨 더하기 
//             coupon += chicken%10; 
//             answer += chicken/=10;
//         }//쿠폰 28
//         while(coupon>=10){//나머지 쿠폰으로 치킨 더하기
//             answer += coupon/10; //answer +=2
//             temp += coupon%10;  //temp += 8
//             coupon/=10; //coupon = 2
//             coupon+=temp;   //coupon += 2+8
//             temp=0;
//         }
        
//         return answer;
        
        
        int answer = chicken/9;
        if(chicken>1&&chicken%9==0){
            answer--;
        }


        return answer;
    }
}