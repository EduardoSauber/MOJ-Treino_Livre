#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificaTexto(char* string, char* filter){
    int flag = 0;

    int tamanhoMSG = strlen(string);
    int nFilter = strlen(filter);

    for (int i=0; i<tamanhoMSG; i++){
        for (int j=0; j<nFilter; j++){
            if (tolower(string[i]) == tolower(filter[j])){
                flag++;
            }
        }
    }

    return flag;
}

int main(){
    int nTeclas;

    scanf("%d",&nTeclas);
    getchar();

    char teclasQuebradas[nTeclas+2];
    fgets(teclasQuebradas,(nTeclas+2),stdin);
    teclasQuebradas[strcspn(teclasQuebradas,"\n")] = 0;

    int nLinhas;
    scanf("%d",&nLinhas);
    getchar();

    for (int i=0; i<nLinhas; i++){
        char msg[401];
        fgets(msg,401,stdin);
        msg[strcspn(msg,"\r\n")] = 0;

        printf("Mensagem #%d: ",(i+1));
        if (verificaTexto(msg, teclasQuebradas) < 1){
            printf("Beto ou Carlos\n");
        } else{
            printf("Carlos\n");
        }
    }

    return 0;
}