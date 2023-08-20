/*
Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece no array.
Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
Saída: 2
*/

#include <stdio.h>

int main(){

    int i, tamanho, busca, repeticoes=0;
    printf("Digite a quantidade de elementos do array: ");
    scanf("%d",&tamanho);
    int array[tamanho];
    printf("Digite todos os %d elementos do array: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&array[i]);
    }
    printf("Digite o numero que deseja buscar no array: ");
    scanf("%d",&busca);
    for(i=0;i<tamanho;i++){
        if(array[i]==busca)
        repeticoes++;
    }
    printf("O numero de vezes que o numero da busca repete no array eh: %d",repeticoes);

    return 0;
}