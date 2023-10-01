#include <stdio.h>

int main () {
    
    float consumo;
    float distancia;
    float combustivel; 
    
    printf("informe a distancia pecorrida: \n"); 
    scanf("%f", &distancia);
    
    printf("Informe o gasto total do combustivel \n");
    scanf("%f",&combustivel);
    
    consumo = distancia / combustivel; 
    
    
    printf("%.3f Km/l \n", consumo);
    
    
    return 0;
}
