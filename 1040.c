#include <stdio.h>
int main(){
    double n1, n2, n3, n4, media, exame, nota;
    nota = 0.0;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0;
    if(media >= 7){
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");}
    else if(media < 5){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");}
    else{
        scanf("%lf", &exame);
        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", exame);
        nota += (media+exame)/2;
        if(nota >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", nota);}
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", nota);}
        }
}
