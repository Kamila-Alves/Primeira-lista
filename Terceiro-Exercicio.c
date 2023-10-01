#include <stdio.h>

int main () {
    int valor1;
    int valor2;
    int valor3;
    int valor4;
    int Diferenca;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2); 
    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3); 
    printf("Digite o quarto valor: \n");
    scanf("%d", &valor4); 
    
    Diferenca = valor1 * valor2 - valor3 *  valor4;

    printf("Diferenca = %d \n", Diferenca);




    return 0;
}