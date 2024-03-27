#include<stdio.h>
/*Faça um programa que leia três nomes e no final imprima a sigla formada por elas. 
Por exemplo, se o usuário digitar, Clube, Regatas e Flamengo, deve ser exibido, CRF*/
int main(){
	char sig1,sig2,sig3;
		printf("Digite o primeiro nome\n");
		scanf("%c",&sig1);
		printf("Digite o primeiro nome\n");
		fflush(stdin);
		scanf("%c",&sig2);
		printf("Digite o primeiro nome\n");
		fflush(stdin);
		scanf("%c",&sig3);
		printf("Sigla formada pelos nomes: %c%c%c",sig1,sig2,sig3);
}
