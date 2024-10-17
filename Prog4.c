#include <stdio.h>

int main()
{
    int num, resto;
    
    printf("Digite um Número: \n");
    scanf("%d", &num);
    
    if (1 < num & num < 99) {
        resto = num % 2;
        if(resto == 0) {
        printf("O Número %d é Par!", num);
    } else {
        printf("O Número %d é Ímpar!", num);
    }} else {
        printf("O Número %d não é Aceito!", num);
    }
    return 0;
}
