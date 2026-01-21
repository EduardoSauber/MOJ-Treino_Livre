/*
TREINO LIVRE: Alistamento Militar
https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1080
*/

#include <stdio.h>

void situacaoAlistamento(int idade){

    if (idade >= 18 && idade <= 70){
        printf("Alistamento obrigatorio");
    } else if (idade >= 16 && idade < 18){
        printf("Alistamento facultativo");
    } else if (idade >= 70){
        printf("Alistamento facultativo");
    } else{
        printf("Nao pode se alistar");
    }

}

int main(){

    int idade = 0;

    scanf("%d", &idade);

    situacaoAlistamento(idade);

    return 0;
}