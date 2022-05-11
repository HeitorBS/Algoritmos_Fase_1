#include <stdio.h>

int main (void){

   int nump, contador=1, contar;
   char verif;
	
    do{

    contador = 0;
        
	printf("\nInforme um numero positivo: ");
	scanf("%d", &nump);
    while(nump <= 0)
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &nump);
    }
    
	while (contador <= nump)
    {	
	    printf (" \n");
	
	    for (contar = 1; contar <= contador; contar++) 
        {
		    printf (" %d ", contador);
        }
        contador++;
    }  

        printf("\n\nDeseja digitar outro numero? <S ou N>\n");
        scanf(" %c", &verif);

    }while(verif == 'S' || verif == 's');
    
    return 0;
}