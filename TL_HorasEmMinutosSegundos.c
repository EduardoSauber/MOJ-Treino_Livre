#include <stdio.h>

int main(){
    unsigned long long n;

    if (scanf("%llu",&n) == 1){
        unsigned long long minutos = n*60;
        unsigned long long segundos = n*3600;

        printf("%llu\n%llu\n",minutos,segundos);
    }

    return 0;
}