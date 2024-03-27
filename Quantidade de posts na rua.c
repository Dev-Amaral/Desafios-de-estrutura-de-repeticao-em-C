#include<stdio.h>

int main(){
	int comp,postes,total=0;
	char resp;
	do{
		printf("Digite o valor do comprimento da rua\n");
		scanf("%d",&comp);
		postes=comp/7;
		printf("Quantidade de postes nessa rua: %d\n",postes);
		total+=postes;
		printf("Deseja continuar cadastrando ruas?\n");
		fflush(stdin);
		scanf("%c",&resp);
	} while(resp=='s');
	printf("Quantidade total de postes: %d",total);
}
