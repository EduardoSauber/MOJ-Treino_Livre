/*
TREINO LIVRE: Acelerador de particulas
https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1p2_acelerador
*/

#include <stdio.h>

int sensorAtingido(int *distancia){
    // contar a distancia a partir de dentro do acelerador
    int distanciaSemEmissor = *distancia - 3;

    // identificador do sensor
    int sensor = 0;

    // isso vai multiplicar a distancia do acelerador de acordo com as voltas feitas
    int voltas = distanciaSemEmissor / 8;

    int distancia_Sensor1 = 3 + 8*voltas;
    int distancia_Sensor2 = 4 + 8*voltas;
    int distancia_Sensor3 = 5 + 8*voltas;

    if (distanciaSemEmissor == distancia_Sensor1){
        sensor = 1;
    } else if (distanciaSemEmissor == distancia_Sensor2){
        sensor = 2;
    } else if (distanciaSemEmissor == distancia_Sensor3){
        sensor = 3;
    }
    
    return sensor;
}

int main(){
    int D = 0;

    scanf("%d", &D);

    if (D >= 6){
        printf("%d", sensorAtingido(&D) );
    } else{
        printf("VALOR INVALIDO");
    }
}