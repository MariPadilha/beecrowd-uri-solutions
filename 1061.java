mport java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String entrada[] = new String[4];

        for (int i = 0; i < entrada.length; i++) {
            entrada[i] = sc.nextLine();
        }

        String dInicio[] = entrada[0].split(" ");
        String hInicio[] = entrada[1].split(" : ");
        String dFim[] = entrada[2].split(" ");
        String hFim[] = entrada[3].split(" : ");

        int dataInicio = Integer.parseInt(dInicio[1]);
        int horaInicio = Integer.parseInt(hInicio[0]);
        int minutoINicio = Integer.parseInt(hInicio[1]);
        int segundosInicio = Integer.parseInt(hInicio[2]);

        int dataFim = Integer.parseInt(dFim[1]);
        int horaFim = Integer.parseInt(hFim[0]);
        int minutoFim = Integer.parseInt(hFim[1]);
        int segundosFim = Integer.parseInt(hFim[2]);

        int duracaoSegundos = (dataFim - dataInicio) * 86400 + (horaFim - horaInicio) * 3600
                + (minutoFim - minutoINicio) * 60 + (segundosFim - segundosInicio);

        int dias, horas, minutos, segundos;

        dias = duracaoSegundos / 86400;
        horas = (duracaoSegundos % 86400) / 3600;
        minutos = ((duracaoSegundos % 86400) % 3600) / 60;
        segundos = ((duracaoSegundos % 86400) % 3600) % 60;

        System.out.println(dias + " dia(s)");
        System.out.println(horas + " hora(s)");
        System.out.println(minutos + " minuto(s)");
        System.out.println(segundos + " segundo(s)");

        sc.close();
    }
}
