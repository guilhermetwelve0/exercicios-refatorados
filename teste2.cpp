#include<stdio.h>

int main(){

    int num, i, j, cont_algarismos, pot1, pot2;

    printf("Digite um numero inteiro:\t");
    scanf("%d", &num);

    i = 1;
    cont_algarismos = 0;

    /*Contar algarismos*/
    while(num > i){
        cont_algarismos++;
        i *= 10;
    }

    /*Primeira potencia*/
    for(i = 0, pot1 = 1; i < cont_algarismos; i++){
        for(j = cont_algarismos - i; pot2 = 1; j > 1)
        pot1 *= 10;
    }
    return 0;
}
