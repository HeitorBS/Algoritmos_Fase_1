#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	
    char vf;
    int min,max,linhas,i,j,primo,pulalinha=0;

    do{
	pulalinha=0;
	printf("Infome o valor do limite inferior:");
	scanf("%i",&min);
	while(min<1){printf("\nO limite deve ser no minimo 1!\nInforme o limite inferior:");
		scanf("%i",&min);}//condição limite inferior
		printf("\nInforme o valor do limite superior:");
		scanf("%i",&max);
	while(min>max){printf("\n O limite superior deve ser maior ou igual ao inferior!\nInforme o limite superior:");
		scanf("%i",&max);}//condição limite superior
		printf("\nInforme quantos numeros deseja imprimir por linha:");
		scanf("%i",&linhas);
    //barreira valores	
	
	//barreira primo	
	for (i = min; i <= max; i++) {
		if (i == 0 || i == 1) {
			//números zero e 1 não são primos
			primo = 0;
		} else {
			primo = 1; //considero inicialmente que o número é primo
			for(j = 2; j < i; j++) { //tento provar que ele não é primo
				if (i % j == 0) {
					primo = 0; //consigo provar que ele não é primo
				}}}
		if (primo == 1) {
			printf("%i ", i);
			pulalinha++;
			if(pulalinha>=linhas){
				printf("\n");
				pulalinha=0;
			}}}
	//barreira primo		
	
    //barreira laço	
    printf("\n\nDeseja repetir o programa <S ou N>?");
    scanf(" %c",&vf);	
    }while(vf=='S'||vf=='s');
	
	return 0;
}