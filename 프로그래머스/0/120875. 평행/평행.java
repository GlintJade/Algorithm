import java.util.*;
class Solution {
    public int solution(int[][] dots) {
        double[] arr = new double[6];
        int k=0;
        arr[0] = (double)(dots[0][1]-dots[1][1])/(double)(dots[0][0]-dots[1][0]);
        arr[1] = (double)(dots[0][1]-dots[2][1])/(double)(dots[0][0]-dots[2][0]);
        arr[2] = (double)(dots[0][1]-dots[3][1])/(double)(dots[0][0]-dots[3][0]);
        arr[3] = (double)(dots[1][1]-dots[2][1])/(double)(dots[1][0]-dots[2][0]);
        arr[4] = (double)(dots[1][1]-dots[3][1])/(double)(dots[1][0]-dots[3][0]);
        arr[5] = (double)(dots[2][1]-dots[3][1])/(double)(dots[2][0]-dots[3][0]);
        
//         for(int i=0; i<dots.length-1; i++){ //0~3
//             for(int j=i+1; j<dots.length; j++){
//                 double l = (double)(dots[i][1]-dots[j][1])/(double)(dots[i][0]-dots[j][0]);
//                 arr[k] = l;
//                 k++;
//             }
//             // double l = (double)(dots[i][1]-dots[i+1][1])/(double)(dots[i][0]-dots[i+1][0]);
//             // arr[k++] = l;
            
//         }
        //for문 두개 필요X
        return arr[0]==arr[5]||arr[1]==arr[4]||arr[2]==arr[3]?1:0;
    }
}