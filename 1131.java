import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int gremio = 0, inter = 0, empate = 0, vezes = 0, vez = 1, escolha;
        String j = "oi";
        while(true) {
                int a = input.nextInt(), b = input.nextInt();
                if(a > b) {
                        inter += 1;
                }
                if(a < b) {
                        gremio += 1;
                }
                if(a == b) {
                        empate += 1;
                }
                vezes += 1;
                escolha = input.nextInt();
                if(escolha == 1){
                        vez += 1;
                }
                if(escolha == 2) {
                        break;
                }
        }
        for(int i = 0; i < vez; i++){
                System.out.println("Novo grenal (1-sim 2-nao)");
        }
        if(inter > gremio && inter > empate) {
                j = "Inter";
        }
        if(gremio > inter && gremio > empate) {
                j = "Gremio";
        }
        if(empate > gremio && empate > inter) {
                j = "Nao houve vencedor";
        }
        System.out.println(vezes +" grenais");
        System.out.println("Inter:"+inter);
        System.out.println("Gremio:"+gremio);
        System.out.println("Empates:"+empate);
        System.out.println(j + " venceu mais");
}
}
