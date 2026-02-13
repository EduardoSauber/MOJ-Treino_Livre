/*
TREINO LIVRE: Preguiçoso até demais...
https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.processo-preguicoso

IMPORTANTE: SIGUSR1 e SIGALRM são POSIX e simplesmente não existem no sistema buxa do windows
*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int sinal){
    static int cutucadas = 0;

    switch (sinal)
    {
        case SIGUSR1:{
            const char texto[] = "SIGUSR1 eh para aproveitar mais um pouco\n";
            write(STDOUT_FILENO,texto,sizeof(texto)-1);
            break;
        }
        case SIGALRM :{
            if (cutucadas == 2){
                const char texto[] = "Os incomodados que se mudem, tchau\n";
                write(STDOUT_FILENO,texto,sizeof(texto)-1);
                _exit(0);
            } else{
                const char texto[] = "Ai que sono, quero dormir mais um pouco\n";
                write(STDOUT_FILENO,texto,sizeof(texto)-1);
                cutucadas++;
            }
            break;
        }
    }
}

int main(){
    signal(SIGUSR1, handler);
    signal(SIGALRM, handler);

    while(1){
        sleep(1);
    }

    return 0;
}