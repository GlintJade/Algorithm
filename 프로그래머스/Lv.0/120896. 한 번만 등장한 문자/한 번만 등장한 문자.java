import java.util.*;
class Solution {
    public String solution(String s) {
        String answer = "";
        for(int j=0; j<s.length(); j++){
            char cur = s.charAt(j);
            int count = 0;
            for(int i=0; i<s.length(); i++){
                if(cur == s.charAt(i)){count++;}
            }
            if(count==1){answer += cur;}
        }
        char[] charArr = answer.toCharArray(); // String to Char Array
        Arrays.sort(charArr); // Char Array 알파벳 순 정렬
        return new String(charArr);
    }
}