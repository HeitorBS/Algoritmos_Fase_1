#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	
	float vlr,total,ctitens,vlrcents,vlrint2 = 0; //lembrar de usar "." e não ","
	int qnt,vlrint = 0,n1,n2,n5,n10,n20,n50,n100;
	char vrf;

	do{do{printf("Informe a quantidade: ");
	scanf("%i",&qnt);
		if(qnt>0){
			printf("Informe o valor: ");
			scanf("%f",&vlr);
			ctitens=ctitens+qnt;
			total=total+(qnt*vlr);/*calculando o valor total*/}}while(qnt>0);
	//barreira laço inserção
	ctitens=total/ctitens; //calculando a média dos produtos

	printf("\n\nVALOR TOTAL DA COMPRA: R$ %.2f\nVALOR MEDIO DA COMPRA: R$ %.2f",total,ctitens);
	vlrint=vlrint+total;
	vlrint2=vlrint+vlrint2;
	vlrcents=total-vlrint2;
	printf("\n\nO valor total da compra eh de %d reais e %.2f centavos\n\n",vlrint,vlrcents);//separação em reais e centavos
	
	n100=vlrint/100;
	vlrint=vlrint%100;
	n50=vlrint/50;
	vlrint=vlrint%50;
	n20=vlrint/20;
	vlrint=vlrint%20;
	n10=vlrint/10;
	vlrint=vlrint%10;
	n5=vlrint/5;
	vlrint=vlrint%5;
	n2=vlrint/2;
	vlrint=vlrint%2;	
	n1=vlrint/1;
	vlrint=vlrint%1;
	
	if(n100>0){
	printf("%i nota(s) de 100\n",n100);}
	if(n50>0){
	printf("%i nota(s) de 50\n",n50);}
	if(n20>0){
	printf("%i nota(s) de 20\n",n20);}
	if(n10>0){
	printf("%i nota(s) de 10\n",n10);}
	if(n5>0){
	printf("%i nota(s) de 5\n",n5);}
	if(n2>0){
	printf("%i nota(s) de 2\n",n2);}
	if(n1>0){
	printf("%i moeda(s) de 1\n",n1);}	

	//barreira laço repetição
	printf("\n\nDeseja repetir o programa? (S ou N)?\n");
	scanf(" %c",&vrf);
	vlr=0,total=0,ctitens=0,vlrcents=0,vlrint2=0,qnt=0,vlrint=0;
	}while(vrf=='S'||vrf=='s');
	return 0;
}