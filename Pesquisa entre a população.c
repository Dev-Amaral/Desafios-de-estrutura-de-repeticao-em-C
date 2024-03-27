#include<stdio.h>
int main(){
char sexo, corolho,corcabelo;
int idade,maior=0,qtdgatinhas=0;
	do{
	printf("Digite a idade\n");
	scanf("%d",&idade);
	if(idade!=-1){
	printf("Digite a cor do cabelo\n L (louros), C (castanhos) e P (pretos)\n");
	fflush(stdin);
	scanf("%c",&corcabelo);
	printf("Digite a cor dos olhos\n A (azuis), V (verdes), C (castanhos), P (pretos)\n");
	fflush(stdin);
	scanf("%c",&corolho);
	printf("Digite o sexo\n");
	fflush(stdin);
	scanf("%c",&sexo);
	if(idade>=maior){
		maior=idade;
	}
	if(sexo=='F'&& idade>=18 && idade<=35 && corolho=='V' && corcabelo=='L'){
		qtdgatinhas++;
	}
	}
		
		
	} while(idade!=-1);
	printf("Maior idade: %d\n",maior);
	printf("Quantidades de novinhas loiras dos olhos verdes: %d",qtdgatinhas);
	
}