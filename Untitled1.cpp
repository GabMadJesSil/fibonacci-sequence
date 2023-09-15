#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>

void somatorio(int final);

int main( ){
	int max,soma=0;
	
	printf("digite a quantidade maxima: ");
	scanf("%d",&max);
	
	somatorio(max);
	
	return 0;
}

void somatorio(int final){
	int ant=0 , atual=1 ,depois ;
	int cont=0;
	do{		
		cont++;
		printf("%d \n",atual);
		
		depois = ant+atual;
		ant=atual;
		atual=depois;
	
	}while(cont<final);
	
	
}


