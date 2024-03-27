#include<stdio.h>
#include<math.h>
/*Faça um programa que calcule a tangente e cosseno de um número e apresente esses valores aproximado para cima.*/

int main(){
	float tg, cosse,x;
	char resp;
	do{
		printf("Digite um valor\n");
	scanf("%f",&x);
	
	cosse=cos(x);
	tg=tan(x);
	
	if(cosse>(int)cosse){
		printf("Cos(%.3f) = %d\n",x,(int)cosse+1);
	} else{
		printf("Cos(%.3f) = %f\n",x,cosse);
	}

	if(tg>(int)tg){
		printf("Tg(%.3f) = %d\n",x, (int)tg+1);
	}  else{
		printf("Tg(%.3f) = %f\n",x, tg);
	}
	printf("Deseja calcular a tangente e cosseno de mais algum numero? s ou n?\n");
	fflush(stdin);
	scanf("%c",&resp);
	} while(resp=='s');
	
}
