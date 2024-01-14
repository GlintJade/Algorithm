import java.util.*;
import java.util.stream.Collectors;
class Solution {
    public String solution(String s) {
        String answer = s.chars().filter(c -> s.indexOf(c) == s.lastIndexOf(c)).mapToObj(c -> String.valueOf((char) c)).sorted().collect(Collectors.joining());
        return answer;
    }
}
//소트 필터 인덱스오브 조인