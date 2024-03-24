import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt(), z = 0;
        int y = x+1;
        while(true) {
                z = input.nextInt();
                if(z >= y) {
                        break;
                }
        }
        int numeros = 1;
        for(int i = x+1; i < z+1; i++) {
                x += i;
                numeros += 1;
                if(x >= z) {
                        break;
                }
        }
        System.out.println(numeros);
}
}
