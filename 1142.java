import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 1; i < n*4+1; i++){
                if(i%4==0){
                        System.out.println("PUM");
                }
                else{
                        System.out.printf(i + " ");
                }
        }
}
}
