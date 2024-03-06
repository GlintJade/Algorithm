import java.util.Scanner;
public class Main {
    public static void main(String[] args){// main함수는 public static void, 한 클래스에 두 개 이상의 main은 불가능
        Scanner sc = new Scanner(System.in);
        int A,B;
        A = sc.nextInt();
        B = sc.nextInt();
        if(A>B) {
            System.out.println(">");
        }
        else if(A<B){
            System.out.println("<");
        }
        else{
            System.out.println("==");
        }


    }
}