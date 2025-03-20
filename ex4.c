#include <stdio.h>

int main(void)
{  
    float raio;
    float diametro, circunferencia, area;
    float PI = 3.1415;

    printf("Digite o valor do raio! ");
    scanf("%f", &raio);
    
    diametro = raio * 2;
    circunferencia = 2 * PI * raio;
    area = PI * (raio * raio);
    
    printf("\n Diametro: %.1f Circunferencia: %.1f Area: %.1f", diametro, circunferencia, area);

    return 0;
}
