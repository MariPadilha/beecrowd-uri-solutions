import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 0; i < n; i++){
                int soma = 0;
                int a = input.nextInt(); int b = input.nextInt();
                if(a < b){
                        for(int j = a+1; j < b; j++){
                                if(j % 2 != 0){
                                        soma+=j;
                                }
                        }
                }
                else if(a > b){
                        for(int j = b+1; j < a; j++){
                                if(j % 2 != 0){
                                        soma+=j;
                                }
                        }
                }
                System.out.println(soma);
        }
}
}
