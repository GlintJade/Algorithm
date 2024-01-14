import java.util.stream.Collectors;

class Solution {
    public String solution(String myString) {
        return myString.chars().mapToObj(operand -> String.valueOf((char) (Character.isLowerCase(operand) ? Character.toUpperCase(operand) : Character.toLowerCase(operand)))).collect(Collectors.joining());
    }
}