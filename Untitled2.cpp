#include<stdio.h> //biblioteca de entrada e saida
#include<stdlib.h> //padr�o
#include<locale.h> //�
int main(){
	system ("color 04");
	setlocale(LC_ALL,"portuguese");
	float N1,N2,res,res2;
	printf("\n Informe o primeiro n�mero.\n");
	scanf("%f",&N1);
	printf("\n Informe o segundo n�mero.\n");
	scanf("%f",&N2);
	res=N1+N2;
	printf("\n O resultado � %.2f \n",res);
	res2=res+1;
	printf("\n O pr�ximo n�mero � %.2f \n",res2);
	
	system("pause");
	
		
}
