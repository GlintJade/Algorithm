import java.util.regex.Matcher;
import java.util.regex.Pattern;
class Solution {
    public int solution(int order) {
        String orderString = String.valueOf(order);
        Pattern pattern = Pattern.compile("[369]");
        Matcher matcher = pattern.matcher(orderString);
        int count = 0;
        while (matcher.find()) {
            count++;
        }
        return count;
    }
}