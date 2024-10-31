#include <stdio.h>

int main()
{
    int num[10];
    int par[10];
    int contador = 0;
    
    printf("Digite 10 Números: \n");
    
    for(int i = 0; i < 10; i++) {
       scanf("%d", &num[i]);
    }
    
    for (int i= 0; i < 10; i++) {
        if (num[i] % 2 ==0) {
            par[contador] = num[i];
            contador++;
        }
    }
    
    printf("Números Pares: \n");
    
    for (int i = 0; i < contador; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");
    return 0;
}
