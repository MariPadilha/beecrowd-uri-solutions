using System;
class URI {
    static void Main(string[] args) { 
        string ossos, animal, alimento;
        ossos = Console.ReadLine();
        animal = Console.ReadLine();
        alimento = Console.ReadLine();
        if(ossos == "vertebrado"){
            if(animal == "ave"){
                if(alimento == "carnivoro"){
                    Console.WriteLine("aguia");
                }
                else if(alimento == "onivoro"){
                    Console.WriteLine("pomba");
                }
            }
            else if(animal == "mamifero"){
                if(alimento == "onivoro"){
                    Console.WriteLine("homem");
                }
                else if(alimento == "herbivoro"){
                    Console.WriteLine("vaca");
                }
            }
        }
        else if(ossos == "invertebrado"){
            if(animal == "inseto"){
                if(alimento == "hematofago"){
                    Console.WriteLine("pulga");
                }
                else if(alimento == "herbivoro"){
                    Console.WriteLine("lagarta");
                }
            }
            else if(animal == "anelideo"){
                if(alimento == "hematofago"){
                    Console.WriteLine("sanguessuga");
                }
                else if(alimento == "onivoro"){
                    Console.WriteLine("minhoca");
                }
            }
        }
    }
}
