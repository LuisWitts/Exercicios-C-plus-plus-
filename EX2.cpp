#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int anon,anoatual,idade,NM,DV,horas;
	printf("\nInfome o ano em que nasceu. \n");
	scanf("%i",&anon);
	printf("\nInforme o ano atual\n");
	scanf("%i",&anoatual);
	idade=anoatual-anon;
	printf("\n Sua idade é %i \n", idade);
	NM=idade*12;
	printf("\n Você tem %i meses de vida\n",NM);
	DV=idade*365;
	printf("\n Você tem %i dias de vida \n ",DV);
	horas=DV*24;
	printf("\n Você tem %i horas de vida \n",horas);
	
	system("pause");
	
	
	
	
	  
}
