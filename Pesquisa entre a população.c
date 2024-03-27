#include<stdio.h>
/* Foi realizada uma pesquisa de algumas características físicas da
população de uma certa região, a qual coletou os seguintes dados referentes a
cada habitante para serem analisados
- sexo: M (masculino) e F (feminino)
- cor dos olhos: A (azuis), V (verdes), C (castanhos), P (pretos)
- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
- idade
Faça um algoritmo que determine e escreva:   
- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e
que tenham olhos verdes e cabelos louros.
O programa deve finalizar quando o usuário digitar o valor -1 de entrada como idade*/
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
