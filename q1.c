#include <stdio.h>
#include <locale.h>

int main(){
    float n1, n2, n3, n4, media;
    int con = 0;

    while(con<50){
        printf("\n");
        printf("\n");

        printf("Coloque sua nota 1: ");
        scanf("%f", &n1);

        printf("\n");

        printf("Coloque sua nota 2: ");
        scanf("%f", &n2);

        printf("\n");

        printf("Coloque sua nota 3: ");
        scanf("%f", &n3);

        printf("\n");

        printf("Coloque sua nota 4: ");
        scanf("%f", &n4);

        media = (n1+n2+n3+n4)/4;

        printf("\n");

        if(media >= 7){
            printf("Aprovado! Media: %f", media);
        }else{
            printf("Aluno reprovado! Media: %f", media);
        }

     con++;

}


     return(0);
    }
