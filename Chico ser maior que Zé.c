#include<stdio.h>
/*Chico tem 1,50 metro e cresce 2 centímetros por ano,
enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo
que calcule e imprima quantos anos serão necessários para que Zé seja maior que
Chico*/
int main(){
	int i=0, chico=150, ze=110;
	while(chico>=ze){
		chico+=2;
		ze+=3;
		i++;
	}
	printf("Anos necessarios para que Ze seja maior que Chico: %d",i);
	
}
