import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true){
                int a = input.nextInt(); int b = input.nextInt();
                if(a == b){
                        break;
                }
                System.out.println((a<b)?"Crescente":"Decrescente");
        }
}
}
