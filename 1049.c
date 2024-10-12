#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ossos[20];
    char animal[20];
    char alimento[20];

    scanf("%s", ossos);
    scanf("%s", animal);
    scanf("%s", alimento);

    if(!strcmp(ossos, "vertebrado")){
        if(!strcmp(animal, "ave")){
            if(!strcmp(alimento, "carnivoro")){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if(!strcmp(alimento, "onivoro")){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(!strcmp(animal, "inseto")){
            if(!strcmp(alimento, "hematofago")){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(!strcmp(alimento, "hematofago")){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
