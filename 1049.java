import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String ossos = input.nextLine(), animal = input.nextLine(), alimento = input.nextLine();
        if(ossos.equals("vertebrado")) {
                if(animal.equals("ave")) {
                        if(alimento.equals("carnivoro")) {
                                System.out.println("aguia");
                        }
                        else if(alimento.equals("onivoro")) {
                                System.out.println("pomba");
                        }
                }
                else if(animal.equals("mamifero")) {
                        if(alimento.equals("onivoro")) {
                                System.out.println("homem");
                        }
                        else if(alimento.equals("herbivoro")) {
                                System.out.println("vaca");
                        }
                }
        }
        else if(ossos.equals("invertebrado")) {
                if(animal.equals("inseto")) {
                        if(alimento.equals("hematofago")) {
                                System.out.println("pulga");
                        }
                        else if(alimento.equals("herbivoro")) {
                                System.out.println("lagarta");
                        }
                }
                else if(animal.equals("anelideo")) {
                        if(alimento.equals("hematofago")) {
                                System.out.println("sanguessuga");
                        }
                        else if(alimento.equals("onivoro")) {
                                System.out.println("minhoca");
                        }
                }
        }
}
}
