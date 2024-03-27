#include<stdio.h>
int main(){
	int i=0, chico=150, ze=110;
	while(chico>=ze){
		chico+=2;
		ze+=3;
		i++;
	}
	printf("Anos necessarios para que Ze seja maior que Chico: %d",i);
	
}