import java.util.*;
class Solution {
    public String solution(String polynomial) {
        String []s=polynomial.split(" \\+ ");
        int x=0, n=0;
        String answer= "";
        for(int i=0; i<s.length; i++){
            if(s[i].contains("x")){
                x+=s[i].equals("x")?1:Integer.parseInt(s[i].replaceAll("x", "")); //x만 있는 경우는 x에 1을 더하고, 아니면 x를 없애서 앞에 숫자를 더하기
            }
            else n+=Integer.parseInt(s[i]);
        }
        if(x==1&&n!=0){answer = "x + "+ n;}
        else if(x==1&&n==0){answer = "x";}
        else if(x!=0&&n==0){answer = x+"x";}
        else if(x!=0&&n!=0){answer = x +"x + " + n;}
        else if(x==0&&n==0){answer = "0";}
        else if(x==0&&n!=0){answer = Integer.toString(n);}
        return answer;
    }
}
/*  x   n
    1   !0 -> x+n
    1   0 -> x
    0   0 -> 0
    0   !0 -> n
*/