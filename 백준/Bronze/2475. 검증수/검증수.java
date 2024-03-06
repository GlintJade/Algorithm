import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] N = new int[5];
        int sum = 0;
        for(int i=0; i<5; i++){
            N[i] = sc.nextInt();
            sum += Math.pow(N[i], 2);
        }
        System.out.println(sum%10);

    }
}