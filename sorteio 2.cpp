#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");//#include<locale.h>
	int i,x,soma=0,repet=0,repetseis=0;
	srand((unsigned)time(NULL));//#include<time.h>
	for(i=1;i<=10;i++){
		Sleep(100);
		x=1+rand()%6;
		soma=soma+x;
		printf("\nO %iº número sorteado= %i \n",i,x);
	if(x==2){
	 
	 	repet=repet+1;
	 	
	 }
	 if(x==6){
	 
	 	repetseis=repetseis+1;
	 	
	 }
	 
	 }
	 printf("\n A soma dos números é = %i\n",soma);
	 printf("\n O número 2 aparece %i vezes \n",repet);
	 printf("\n O número 6 aparece %i vezes \n",repetseis);
	 

	 
	 
	 system("pause");
}
