#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
		float c,f;
		printf("\n Diga sua temperatura em celcios\n");
		scanf("%f",&c);
		f=(9*c+160)/5;
		printf("\n A temperatura em Fahrenheit é %.2f", f);
	
	
	
	  
}
