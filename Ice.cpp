#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void tempo(float ice,float estoque, float reais){
	for(int i=2;i>=1;i--){
		system("cls");
		printf("\n Kg Gelo na Maquina: %.2f",ice);
		printf("\n Kg Gelo no Estoque: %.2f" ,estoque);
		printf("\n Caixa: %.2f Reais\n",reais);
		printf("\n Produzindo Gelo em %d segundos \n",i);
		Sleep(1000);
	}
}

int main(){
	float ice=0; //quantidade em kg 
	float pacote=10;
	float estoque=0;
	int i=1;
	float reais=0;
	
	do{
		
		tempo(ice,estoque,reais);
		
		ice+=6.25;
		printf("\n Produzido 6,25 Kg de Gelo");
		Sleep(2000);
		
		if(ice >= 10){
			ice-=10;
			printf("\n Retirando 10Kg de Gelo da Maquina e Colocando no Estoque");
			Sleep(2000);
			estoque+=10;
		}
		
		if(estoque >= 50){
			estoque-=50;
			reais+=60;
			printf("\n Vendendo 50Kg de Gelo a 60 Reais");
			Sleep(2000);
		}
	}while(i==1);
	
	
	
	
	return 0;
}

/*
*  Desenvolvido por Igor Lucena
*  Compartilhado no GitHub
*/
