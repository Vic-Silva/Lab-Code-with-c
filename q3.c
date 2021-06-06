#include <stdio.h>
#include <locale.h>

int main(){

    float ma=0, acm=0, mat=0;
    int con=0;

    while(ma!=-1){
        printf("Media anual:");
        scanf("%f", &ma);

    if(ma!=-1){
        acm+=ma;
        con++;
}

}

    if(con>0){
        mat=acm/con;
        printf("Media anual turma = %.2f", mat);
}
    else{
        printf("\n Nenhuma mêdia válida fornecida \n");
}
    return(0);

}
