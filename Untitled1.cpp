#include<stdio.h>

void somatorio(int max, int cont, int ant, int atual, int depois);

int main() {
    int max,cont = 0,ant = 0, atual = 1, depois = 0;

    while (1) {
        printf("Digite a quantidade máxima: ");
        scanf("%d", &max);

        somatorio(max, cont, ant, atual, depois);
    }

    return 0;
}

void somatorio(int max, int cont, int ant, int atual, int depois) {
	
    printf("%d\n", atual);

    depois = ant + atual;

    ant = atual;

    atual = depois;

    cont++;

    if (cont < max) {
        somatorio(max, cont, ant, atual, depois);
    }
}


