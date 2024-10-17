#include <stdio.h>

int main()
{
    int a = 2, b;
    printf("A sequência é: \n");
    while(a <= 40){
        printf("%i \n", a);
        b += a;
        a += 2;
    }
    printf("A somátoria é igual a: %i \n", b);
    
    return 0;
}
