#include <stdio.h>

int main (void)
{                                                                               // Váriaveis
    char categoria;
    int quantidade, soma, total;
    float media;
    
    quantidade = 0;
    soma = 0;
    total = 0;
    
    do
    {   
        printf("Informe a categoria:  ");                                       // Coletar informação da categoria;
        fflush(stdin);
        scanf("%c", &categoria);
        if (categoria != 'A' && categoria != 'B' && categoria != 'C')           // Ler a quantidade somente se a categoria é válida;
        {
            break;
        }

        do
        {
            printf("Informe a quantidade:  ");                                  // Coletar informação da quantidade;
            fflush(stdin);
            scanf("%d", &quantidade);

        } while (quantidade <= 0);                                              // Garantir que a quantidade seja maior que 0;

        soma = soma + quantidade;
        total++;
        media = (float) soma / (float) total;                                   // Float foi utilizado para transformar as categorias temporariamente em float;

    } while (categoria == 'A' || categoria == 'B' || categoria == 'C');
    
    printf("A media dos produtos eh: %.2f", media);                             // Média calculada em forma de float.

    return 0;
}