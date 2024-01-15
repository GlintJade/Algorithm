import java.util.*;
import java.util.stream.Collectors;
class Solution {
    public int[] solution(int[] array) {
        List<Integer> list = Arrays.stream(array).boxed().collect(Collectors.toList());
        int max = list.stream().max(Integer::compareTo).orElse(0);
        int index = list.indexOf(max);
        return new int[] {max, index};
    }
}
//boxed() => array를 Stream<Integer>형으로 변환 / collection => 리스트형으로 만듦
//max(Integer::compareTo): 스트림의 요소 중에서 최댓값을 찾습니다. orElse(0): 최댓값이 없을 경우 기본값으로 0을 사용합니다
