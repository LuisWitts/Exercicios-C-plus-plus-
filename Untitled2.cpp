#include<stdio.h> //biblioteca de entrada e saida
#include<stdlib.h> //padrão
#include<locale.h> //é
int main(){
	system ("color 04");
	setlocale(LC_ALL,"portuguese");
	float N1,N2,res,res2;
	printf("\n Informe o primeiro número.\n");
	scanf("%f",&N1);
	printf("\n Informe o segundo número.\n");
	scanf("%f",&N2);
	res=N1+N2;
	printf("\n O resultado é %.2f \n",res);
	res2=res+1;
	printf("\n O próximo número é %.2f \n",res2);
	
	system("pause");
	
		
}
