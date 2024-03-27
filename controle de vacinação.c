#include<stdio.h>

int main(){
	int idade,cpf,i=0,vacinados=0;
	for(i=0;i<5;i++){
		printf("Digite o CPF do paciente %d\n",i+1);
		scanf("%d",&cpf);
		printf("Digite a idade do paciente\n");
		scanf("%d",&idade);
		if(idade>60){
			vacinados++;
			printf("\nO paciente sera vacinado\n\n");
		}	else{
			printf("\nO paciente nao sera vacinado\n\n");
		}	
	}
	printf("\nTotal de vacinados: %d",vacinados);
}
