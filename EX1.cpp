#include<stdio.h> //biblioteca de entrada e saida
#include<stdlib.h> //padr�o
#include<locale.h> //�
int main(){
	system ("color 04");
	setlocale(LC_ALL,"portuguese");
	float X,Y,Z,A,B,C,F,RES,RES2,RES3,RES4;
	printf("\n Informe o primeiro n�mero. \n");
	scanf("%f" ,&X);
	printf("\n Informe o segundo n�mero. \n");
	scanf("%f",&Y);
	printf("\n Informe o terceiro n�mero. \n");
	scanf("%f",&Z);
	RES=(X+Y+Z)/3;	
	printf("\n A m�dia entre eles � %.2f\n" ,RES);
	
	printf("\n Informe o primeiro n�mero. \n");
	scanf("%f" ,&A);
	printf("\n Informe o segundo n�mero. \n");
	scanf("%f",&B);
	printf("\n Informe o terceiro n�mero. \n");
	scanf("%f",&C);
	RES2=(A+B+C)/3;
	printf("\n A m�dia entre eles � %.2f\n",RES2);
	RES3=RES+RES2;
	printf("\n A soma das m�dias � %.2f \n ",RES3);
	RES4=(RES+RES2)/2;
	printf("\n A m�dia das m�dias � %.2f\n",RES4);
	
	system("pause")	;
	
}
