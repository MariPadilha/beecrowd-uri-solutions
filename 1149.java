import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(), n = input.nextInt(), i = 0;
        while(n<=0){
                n = input.nextInt();
        }
        if(a > n) {
                for(int l = a; l < n+a; l++) {
                        i += l;
                }
        }
        else {
                for(int p = n; p < n+a; p++) {
                        i += p;
                }
        }
        System.out.println(i);
}
}
