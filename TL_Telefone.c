/*
TREINO LIVRE: Telefone
https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.telefone
*/

#include <stdio.h>

int converteLetraNumero(char* letra){   // com certeza deve ter um jeito melhor de fazer isso
    if ((*letra) >= 65 && (*letra) <= 67){
        return 2;
    }
    if ((*letra) >= 68 && (*letra) <= 70){
        return 3;
    }
    if ((*letra) >= 71 && (*letra) <= 73){
        return 4;
    }
    if ((*letra) >= 74 && (*letra) <= 76){
        return 5;
    }
    if ((*letra) >= 77 && (*letra) <= 79){
        return 6;
    }
    if ((*letra) >= 80 && (*letra) <= 83){
        return 7;
    }
    if ((*letra) >= 84 && (*letra) <= 86){
        return 8;
    }
    if ((*letra) >= 87 && (*letra) <= 90){
        return 9;
    }
    return 0;
}

void numeroConvertido(char* string){
    if (*string == '\0'){
        return;
    }

    if ((*string) >= 65 && (*string) <= 90){
        printf("%d",converteLetraNumero(string));
    } else{
        printf("%c",(*string));
    }
    numeroConvertido(string+1);
}

int main(){
    char input[16];
    
    scanf("%s",input);

    numeroConvertido(input);

    return 0;
}