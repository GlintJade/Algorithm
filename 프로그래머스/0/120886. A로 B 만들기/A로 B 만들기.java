import java.util.Arrays;
class Solution {
    public int solution(String before, String after) {
        char[] be = before.toCharArray();
        char[] af = after.toCharArray();
        Arrays.sort(be);
        Arrays.sort(af);
        String a = new String(be);
        String b = new String(af);
        return a.equals(b)?1:0 ;
    }
}

//영어는 알파벳순으로 정렬됨.

/*
String[] b = before.split("");
        String[] a = after.split("");
        int answer =0;
        int count=0;
        for(int i=0; i<b.length; i++){
            for(int j=0; j<a.length; j++){
                if(b[i].equals(a[j])){++count; a[i]="1"; continue;}
            }
        }
        System.out.println(count);
        if(count==b.length){return 1;}
        */