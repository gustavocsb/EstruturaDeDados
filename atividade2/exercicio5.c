/*
Exercício 5 - Multiplicar elementos de dois arrays. Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e retorna um novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.
Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
Saída: [25, 49, 81, 36] 
*/

#include <stdio.h>

int main(){
    int tamanho, i, j;
    printf("Digite o tamanho dos 2 arrays: ");
    scanf("%d",&tamanho);
    int array[2][tamanho], resultado[tamanho];
    for(i=0;i<2;i++){
        printf("Digite os elementos do %d array:\n",i+1);
        for(j=0;j<tamanho;j++){
            printf("Elemento %d: ",j+1);
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<tamanho;i++){
        resultado[i]=array[0][i]*array[1][i];
    }

    printf("O resultado da multiplicacao dos 2 arrays eh:\n");
    printf("[ ");
    for(i=0;i<tamanho;i++){
        printf("%d ",resultado[i]);
    }
    printf("]");

    return 0;
}