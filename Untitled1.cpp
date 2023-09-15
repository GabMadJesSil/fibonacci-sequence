#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>

int somatorio(int final,int cont);

int main( ){
	int max;
	int cont=0;
	
	while(true){
	
	printf("digite a quantidade maxima: ");
	scanf("%d",&max);
	
	somatorio(max,cont);
	}
	
	return 0;
}

int somatorio(int final,int cont){
	int ant=0 , atual=1 ,depois ;
		
		cont++;
		
		printf("%d \n",atual);
		depois = ant+atual;
		
		ant=atual;
		
		atual=depois;

	if(cont<final){
		
		somatorio(final,cont);
	
	}else{
		
		return 0;
	}	
}


