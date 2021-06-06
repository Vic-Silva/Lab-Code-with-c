#include <stdio.h>
#include <locale.h>

int main(){
    float ma, acm=0, mat;
    int con=0;

    while(con<5){
        printf("Media anual: ");
        scanf("%f", &ma);

    acm+=ma;
    con++;

}
    mat=acm/50;
    printf("\n Media anual = %.2f \n", mat);

return(0);
}
