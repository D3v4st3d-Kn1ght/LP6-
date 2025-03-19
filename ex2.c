#include <stdio.h>

int main()
{
    // Alt + Shift + F - Pra identar o código.
    float nota = 0;
    float media = 0;
    int contador = 1;

    while (nota != -5)
    {
        printf("Digite o %d", contador);
        printf("ª valor da nota: ");

        scanf("%f", &nota);

        if (nota != -5) {
           media += nota;
        
           contador += 1;
           printf("contador: %d", contador - 1);
           puts("\n");
        }
        
        else 
        {
            puts("Programa finalizado!");
        }
    }
    // Calcula a média das três notas.
    media /= contador - 1;

    // Divulga o resultado da média, e escreve se foi reprovado ou não.
    printf("\nSua média é de: %.2f", media);
    puts((media >= 6) ? "\nVocê foi Aprovado! " : "\nVocê foi Reprovado!");

    return 0;
}