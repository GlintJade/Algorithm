import java.util.*;
class Solution {
    public int solution(int[][] dots) {
        double[] arr = new double[6];
        int k=0;
        for(int i=0; i<dots.length; i++){
            for(int j=i+1; j<dots.length; j++){
                double l = (double)(dots[i][1]-dots[j][1])/(double)(dots[i][0]-dots[j][0]);
                arr[k] = l;
                k++;
            }
        }
        return arr[0]==arr[5]?1 : arr[1]==arr[4] ? 1 : arr[2]==arr[3]? 1 : 0;
    }
}