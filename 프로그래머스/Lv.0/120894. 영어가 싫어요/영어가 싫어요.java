class Solution {
    public long solution(String numbers) {
        String[] num = {"zero","one", "two", "three","four","five","six","seven","eight","nine"};
        for(int i=0; i<num.length; i++){
            numbers = numbers.replaceAll(num[i], String.valueOf(i));
        }
        return Long.parseLong(numbers);
    }
}


