#include <stdio.h>

int main(){

int n = 1, con = 0, acm = 0;
float mnp;

while(n > 0){
    printf("Digite seu numero: \n \n");
    scanf("%i", &n);

    if((n > 0) && ((n%2)==0)){
        acm+=n;
        con++;
    }
}

if(con > 0){
    mnp = acm/con;
    printf("Media: %f", mnp);
}else{
    printf("Nenhum par");
}

}
