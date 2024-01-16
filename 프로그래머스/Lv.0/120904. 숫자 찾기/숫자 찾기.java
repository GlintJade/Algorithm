import java.util.*;
import java.util.stream.IntStream;
class Solution {
    public int solution(int num, int k) {
        String[] numarr = Integer.toString(num).split("");
        for(int i=0; i<numarr.length; i++){
            if(numarr[i].equals(Integer.toString(k))){return i+1;}
        }
        return -1;
    }
}