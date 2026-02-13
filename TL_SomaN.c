#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int resultado = 0;

    for (int i=0; i < n; i++){
        int input;
        scanf("%d",&input);
        resultado += input;
    }

    printf("%d\n", resultado);

    return 0;
}