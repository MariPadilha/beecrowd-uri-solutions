import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true){
                int soma = 0;
                int a = input.nextInt(); int b = input.nextInt();
                if(a <= 0 || b <= 0){
                        break;
                }
                if(a<b){
                        for(int i = a; i < b+1; i++){
                                System.out.print(i+" ");
                                soma+=i;
                        }
                        System.out.printf("Sum=%d%n", soma);
                }
                else{
                        for(int i = b; i < a+1; i++){
                                System.out.print(i+" ");
                                soma+=i;
                        }
                        System.out.printf("Sum=%d%n", soma);
                }
        }
}
}
