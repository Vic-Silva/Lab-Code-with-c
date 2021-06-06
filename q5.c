#include <stdio.h>

int main(){
float ma, acm = 0, mat;
int con = 0;

do{
    printf("Media anual do aluno \n \n");
    scanf("%f", &ma);
    acm+=ma;
    con++;
}while(con<=5);
    mat = acm/50;
    printf("Media anual turma: %.2f",mat);
}
