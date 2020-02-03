#include<stdio.h> //biblioteca de entrada e saida
#include<stdlib.h> //padrão
#include<locale.h> //é
int main(){
	system ("color 04");
	setlocale(LC_ALL,"portuguese");
	float X,Y,Z,A,B,C,F,RES,RES2,RES3,RES4;
	printf("\n Informe o primeiro número. \n");
	scanf("%f" ,&X);
	printf("\n Informe o segundo número. \n");
	scanf("%f",&Y);
	printf("\n Informe o terceiro número. \n");
	scanf("%f",&Z);
	RES=(X+Y+Z)/3;	
	printf("\n A média entre eles é %.2f\n" ,RES);
	
	printf("\n Informe o primeiro número. \n");
	scanf("%f" ,&A);
	printf("\n Informe o segundo número. \n");
	scanf("%f",&B);
	printf("\n Informe o terceiro número. \n");
	scanf("%f",&C);
	RES2=(A+B+C)/3;
	printf("\n A média entre eles é %.2f\n",RES2);
	RES3=RES+RES2;
	printf("\n A soma das médias é %.2f \n ",RES3);
	RES4=(RES+RES2)/2;
	printf("\n A média das médias é %.2f\n",RES4);
	
	system("pause")	;
	
}
