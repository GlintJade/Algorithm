class Solution {
    public int solution(int num, int k) {
        String strnum = Integer.toString(num);
        String strk = Integer.toString(k);
        return strnum.indexOf(strk)<0 ? -1 : strnum.indexOf(strk)+1;
    }
}