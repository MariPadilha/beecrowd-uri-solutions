import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), fim = input.nextInt();
        for(int i = 1; i < fim+1; i++) {
                if(i%n==0){
                        System.out.println(i);
                }
                else{
                        System.out.print(i + " ");
                }
        }
}
}
