#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
int opc;
setlocale(LC_ALL,"portuguese");
printf("\nDias da semana\n");
printf("\nInforme um n�mero de 1 at� 7\n");
scanf("%i",&opc);
switch(opc){
	case 1:
		printf("\nDomingo\n");
		break;
	case 2:
		printf("\nSegunda-Feira\n");
		break;
	case 3:
		printf("\nTer�a-Feira\n");
		break;
	case 4:
		printf("\nQuarta-Feira\n");
		break;
	case 5:
		printf("\nQuinta-Feira\n");
		break;
	case 6:
		printf("\nSexta-Feira\n");
		break;
	case 7:
		printf("\nSab�do\n");
		break;
	default:
		printf("\nValor informado � incorreto\n");
		break;		
}
system("pause");
}
