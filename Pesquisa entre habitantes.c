#include <stdio.h>
/*Foi feita uma pesquisa entre os habitantes de uma região. Foram
coletados os dados de nome, idade, sexo (M/F) e salário. Faça um programa que calcule e mostre:
- A média dos salários do grupo;
- A maior e a menor idade do grupo;
- A quantidade de mulheres na região;
- A idade e o sexo da pessoa que possui o menor salário;
Finalize a entrada de dados ao ser digitada uma idade negativa.*/
int main(){
	float sal,idade,total=0, menorsal=99999999999,maiorida=0,menorida=99999999999,mulher=0,i=0,idademenorsal,sexomenorsal;
	char sexo, nome[40];
	do{
		printf("Digite o nome\n");
		fflush(stdin);
		gets(nome);
		printf("Digite o sexo. M ou F\n");
		fflush(stdin);
		scanf("%c",&sexo);
		printf("Digite a idade\n");
		scanf("%f",&idade);
		
		if(idade>0){
		printf("Digite o salario\n");
		scanf("%f",&sal);
		total=total+sal;
		if(idade<=menorida){
			menorida=idade;
		} 
		if(idade>=maiorida){
			maiorida=idade;
		}
		if(sal<=menorsal){
			menorsal=sal;
			idademenorsal=idade;
			sexomenorsal=sexo;
		}
		if(sexo=='f'||sexo=='F'){
			mulher++;
		}
		i++;	
		}
		
	} while(idade>0);
	printf("Media dos salarios: %.2f\n",total/i);
	printf("Maior idade: %.1f. Menor idade: %.1f\n",maiorida,menorida);
	printf("Quantidade de mulheres na regiao: %.1f\n",mulher);
	if(sexomenorsal=='f'||sexomenorsal=='F'){
			printf("Sexo da pessoa de menor salario: Feminino\n");} else{ printf("Sexo da pessoa de menor salario: Masculino");}
	printf("Idade da pessoa de menor salario: %.1f",idademenorsal);
}
