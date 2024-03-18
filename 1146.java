import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String numeros = "";
        while(n!=0){
                for(int i = 1; i < n+1; i++){
                        if(i == n){
                                numeros+=i;
                        }
                        else{
                                numeros+=i;
                                numeros+=" ";
                        }
                }
                System.out.println(numeros);
                numeros = "";
                n = input.nextInt();
        }
}
}
