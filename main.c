#include <stdio.h>

int main()
{
    int num = 0;
    
    printf("Digite um Número:");
    
    scanf("%d", &num);
    
    printf("O Número %d", num);
    
    if (num == 0) {
        printf(" é zero.");
    }
    
    if (num > 0) {
        printf(" é Positivo.");
        
    } 
    if (num < 0) {
        printf(" é Negativo.");
    }

    return 0;
}
