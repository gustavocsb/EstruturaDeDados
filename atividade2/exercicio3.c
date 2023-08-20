/*
Exercício 3 - Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca, e retorna "1" se a string de busca existe no array, ou "0" caso não exista.
Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
Saída: 0 
*/

#include <stdio.h>
#include <string.h>

int main (){
    int numStrings, i=0;
    printf("O numero maximo de caracteres por string eh: [20]\n");
    printf("Digite quantas strings tera o array: ");
    scanf("%d",&numStrings);

    char array[numStrings][numStrings*20];
    for(i=0;i<numStrings;i++){
        printf("Digite a string %d: ",i+1);
        scanf("%s",array[i]);
        fflush(stdin);
    }

    char busca[numStrings*20];
    printf("Digite qual string deseja buscar no array: ");
    scanf("%s",busca);

    //retornará = 1 apenas se TODA a string for igual à declaração da variável 'busca'
    int retorno=0;
    for(i=0;i<numStrings;i++){
        if(strcmp(array[i],busca)==0){
            retorno=1;
        }
    }

    printf("%d",retorno);

    return 0;
}