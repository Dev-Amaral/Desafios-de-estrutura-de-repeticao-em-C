#include<stdio.h>

int main(){
	int i, num=0,parametros, qtdprimos=0;
	//Para um numero ser primo ele deve ser divisivel por 1 e por ele mesmo, se ele for divisivel por 3 numeros ele nao é primo
	do{
	num++;
	parametros=0;
		for(i=1;i<100;i++){
		if(num % i == 0){
			parametros++;}
		}
		if(parametros==2){
			printf("%d eh primo\n",num);
			qtdprimos++;}
		}while(qtdprimos<20);
		return 0;
}