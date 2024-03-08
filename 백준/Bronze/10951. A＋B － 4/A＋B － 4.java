import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {
    public static void main(String args[]) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));   //입력받는 BufferedReader 동적할당
        StringBuilder sb = new StringBuilder();     //출력하기 위해 System.out.println대신 StringBuilder를 이용하면 알고리즘 최적화 가능
        StringTokenizer st; //토큰으로 구분하기 위해 필요한 것.
        String str;

        while( (str=br.readLine()) != null ){   //입력받은 값이 null이 아닐 때까지 반복
            st = new StringTokenizer(str," ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            sb.append(a+b).append("\n");    //StringBuilder 객체인 sb에 정수형 변수 a와 b를 더한 값을 문자열로 반환하여 추가한 후, 줄바꿈 문자 추가
//append메서드 : 문자열로 자동 변환
        }
        System.out.print(sb);
    }
}