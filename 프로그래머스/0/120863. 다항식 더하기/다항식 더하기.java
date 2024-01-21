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
        boolean bx = false, bn = false;
        if(x>0) bx= true;
        if(n>0) bn= true;
        // return bx&&bn==true ? x+"x + "+n : (!bx)&&(!bn)==true ? "0" : (!bx)&&(bn)==true ? Integer.toString(n) : x>1 ? x+"x" : "x";
        // return bx&&bn==true ? x+"x + "+n : !bx==true ? Integer.toString(n) : x>1 ? x+"x" : "x";
        String a = "";
        if(x==0) return Integer.toString(n);
        else{
            if(x==1){
                a="x";
            }
            else{
                a += x+"x";
            }
            if(n!=0){
                a+= " + "+Integer.toString(n);
            }
        }
        return a;
        
    }
}
/*  bx  bn
    0   0   -> 0
    1   0   -> x
    0   1   -> n
    1   1   -> x+n
*/