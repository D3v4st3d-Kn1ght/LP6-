#include <stdio.h>

int main() {
    
    //Alt + Shift + F - Pra identar o código.
    float nota = 0;
    float media = 0;
    int avaliacao = 1;
    
    while( avaliacao <= 3 ) {
        
        printf("Digite o valor da %d", avaliacao);
        printf("ª nota: ");
        
        scanf("%f", &nota);
        media += nota;
        avaliacao++;
    }
    //Calcula a média das três notas.
    media = ( media / (avaliacao - 1));
    
    //Divulga o resultado da média, e escreve se foi reprovado ou não. 
    printf("\nSua média é de: %.2f", media);
    puts((media >= 6) ? "\nVocê foi Aprovado! " : "\nVocê foi Reprovado!");
    
    return 0;
}