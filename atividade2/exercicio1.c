/*
Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros e retorna a soma de todos os elementos;
Exemplo: soma_array([5, 7, 9,6])
Saída: 27 
*/

#include <stdio.h>

int main(){
    int tamanho, i=0, soma=0;
    printf("Digite quantos elementos o array possui: ");
    scanf("%d",&tamanho);

    int array[tamanho];

    printf("Digite os %d elementos do array:\n",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<tamanho;i++){
        soma+=array[i];
    }
    printf("A soma dos elementos do array eh: %d",soma);
    
    return 0;
}