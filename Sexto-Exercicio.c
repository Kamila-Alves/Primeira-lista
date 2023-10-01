#include <stdio.h>

int main () {

    int horas;
    int minutos; 
    int segundos;

    printf("Informe os segundos que deseja converter \n");
    scanf("%d", &segundos); 

    horas = segundos / 3600; 
    segundos %= 3600;
    minutos = segundos / 60;
    segundos %= 60; 

    printf("%d:%02d:%02d \n", horas, minutos, segundos);



    return 0;
}