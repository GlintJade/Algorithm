import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(); //next는 공백을 받지 않음, nextLine은 공백 포함해서 변수에 저장됨.

        StringTokenizer st = new StringTokenizer(s, " ");
        System.out.println(st.countTokens());
        sc.close();
    }
}