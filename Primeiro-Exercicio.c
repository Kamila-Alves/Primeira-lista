#include <stdio.h>

int main () {
    float area;
    float PI = 3.14159; 
    float raio;

    printf("Informa o valor do raio: \n");
    scanf("%f",  &raio);

    area = PI * raio * raio;

    printf("A=%.4f \n", area);
    
    
    return 0;
}