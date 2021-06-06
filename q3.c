#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float MA, ACM=0, MAT=0;
    int CON=0;

    while(MA!=-1){
        printf("MÉDIA ANUAL DE UM ALUNO: ");
        scanf("%f", &MA);

    if(MA!=-1){
        ACM+=MA;
        CON++;
}

}

    if(CON>0){
        MAT=ACM/CON;
        printf("MEDIA ANUAL DA TURMA = %.2f", MAT);
}
    else
        printf("\nNENHUMA MÉDIA VÁLIDA FORNECIDA\n");



    return(0);

}
