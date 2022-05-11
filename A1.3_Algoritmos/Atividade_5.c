#include <stdio.h>
#include <stdlib.h>
#include <time.h>                                           //Usado para mudar o número magico

int main (void)
{
    int numeromagico, num;

    srand(time(NULL));                                      // Para trocar o número aleatório
 	numeromagico = rand() % 10;                             // Limita para gerar números aleatórios de 0 até 10
		 	
		while (num != numeromagico)
        {
		    printf ("Digite o numero magico: ");
		    scanf ("%d", &num);
		 
		if (num < numeromagico)
        {

		    printf ("Errado, muito baixo!\n");

		}  
         else if (num > numeromagico) 
        {

		 	printf ("Errado, muito alto!\n");

		}
	}
	printf ("Certo! %d eh o numero magico", num);
    return 0;
}