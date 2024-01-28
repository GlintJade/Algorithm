// class Solution {
//     public int solution(int[] common) {
//         int answer = 0;
//         if(common[1]/common[0]==common[2]/common[1])
//         {
//             return (common[1]/common[0])* common[common.length-1];
//         }
//         else
//         {
//             return common[common.length-1]+(common[1]-common[0]);
//         }
//     }
// }
class Solution {
    public int solution(int[] common) {
        int answer = 0;
        
        if((common[1] - common[0]) == (common[2] - common[1])) // 등차수열일 경우
            answer = common[common.length-1] + (common[1] - common[0]);
        else // 등비수열일 경우
            answer = common[common.length-1] * (common[1] / common[0]);
        
        return answer;
    }
}
//1번의 경우 : 2-1 == 3-2 이면 마지막인덱스에 +1추가
//2번의 경우 : 2*4 == 8 이면, 마지막인덱스에 *2