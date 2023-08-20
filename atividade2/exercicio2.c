/*
Exercício 2 - Maior e menor elemento do array. Escreva uma função que recebe um array de números inteiros e retorna o menor e o maior elemento do array.
Exemplo: menor_maior_array([5, 7, 9,6])
Saída: 5, 9 
*/

#include <stdio.h>

int main(){
    int tamanho, i=0, menorNum, maiorNum;
    printf("Digite o tamanho do array: ");
    scanf("%d",&tamanho);
    int array[tamanho];

    printf("Digite os %d elementos do array:\n",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&array[i]);
    }
    menorNum=array[0];
    maiorNum=array[0];

    for(i=0;i<tamanho;i++){
        if(array[i]<menorNum)
        menorNum=array[i];
    }

    for(i=0;i<tamanho;i++){
        if(array[i]>maiorNum)
        maiorNum=array[i];
    }

    printf("O maior numero do array eh: %d\n",maiorNum);
    printf("O menor numero do array eh: %d\n",menorNum);

    return 0;
}