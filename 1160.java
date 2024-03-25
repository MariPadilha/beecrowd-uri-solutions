import java.util.Scanner;
public class Main {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);
                int n = input.nextInt();
                int a, b, ano;
                double a1, b1;
                for(int i = 0; i < n; i++){
                        ano = 0;
                        a = input.nextInt(); b = input.nextInt(); a1 = Double.parseDouble(input.next()); b1 = Double.parseDouble(input.next());
                        while (true) {
                                a += (a1 / 100.0 * a);
                                b += (b1 / 100.0 * b);
                                ano+=1;
                                if(ano > 100){
                                        System.out.println("Mais de 1 seculo.");
                                        break;
                                }
                                else if(a > b){
                                        System.out.println(ano+" anos.");
                                        break;
                                }
                        }
                }
        }
}
