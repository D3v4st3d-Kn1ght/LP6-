#include <stdio.h>

int main(void)
{

    int contador = 1;
    
    int num1;
    int num2;
    int num3;

    int a;
    int b;
    int c;

        while (contador != -1)
        {
            printf("Digite o primeiro lado, ou -1 se deseja sair: ");
            scanf("%d", &contador);
            num1 = contador;

            if (contador != -1)
            {
                printf("Agora digite um segundo lado, ou -1 se deseja sair: ");
                scanf("%d", &contador);
                num2 = contador;

                if (contador != -1)
                {
                    printf("Agora digite o valor do último lado ou -1 se deseja sair: ");
                    scanf("%d", &contador);
                    num3 = contador;
                }
            }

            if (contador != -1)
            {
                //Vendo se número 1 é maior!
                if(num1 >= num2) {
                    if(num1 >= num3) {
                        c = num1;
                        a = num2;
                        b = num3;
                    } else {  
                        c = num3;
                        a = num2;
                        b = num1;
                    }
                }
                //Vendo se número 2 é maior!
                if(num2 >= num1) {
                    if(num2 >= num3) {
                        c = num2;
                        a = num1;
                        b = num3;
                    } else {
                        c = num3;
                        a = num1;
                        b = num2;
                    }
                }
                //Vendo se número 3 é maior!
                if(num3 >= num1) {
                    if(num3 >= num2) {
                        c = num3;
                        a = num2;
                        b = num1;
                    } else {
                        c = num2;
                        a = num1;
                        b = num3;
                    }
                }
                //Cálculo.
                if ((c * c) == (a * a) + (b * b))
                {
                    printf("É um triângulo retângulo!\n\n");
                }
                else
                {
                    printf("Não é um triângulo retângulo!\n\n");
                }

                printf("A: %d B: %d C: %d",a,b,c);
            }
        }
        return 0;
}