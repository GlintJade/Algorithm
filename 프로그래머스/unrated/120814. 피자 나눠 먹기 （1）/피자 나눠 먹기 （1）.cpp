int solution(int n) {
    return n%7!=0 ? n/7+1 : n/7;
    // if(n%7!=0) return (n/7)+1;
    // else return n/7;
}