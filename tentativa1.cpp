#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
int i=1,entrada;
setlocale(LC_ALL,"portuguese");
printf("\nInforme o número 5\n");
scanf("%i",&entrada);


while(entrada!=5 && i<3 ){
	printf("\nERRRRROOOOOUUU\n");
	printf("\nInforme o número 5\n");
		scanf("%i",&entrada);
	i++;
}
if (entrada==5){
	printf("\nAcertou\n");	
}else{

printf("\Errrrou!!!\n");
system("pause");
}
}
 
