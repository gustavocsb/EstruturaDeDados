#include <stdio.h>

int main(){
    int n, i, d;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            d++;
            break;
        }
    }

    if(d==0)
        printf("1");
    else
        printf("0");

    return 0;
}