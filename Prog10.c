#include <stdio.h>

int main()
{
    int a, b;
        printf("Digíte um Número Inteiro:");
        scanf("%i", &a);
        b = a + 15;
    while(a < b){
        a++;
        printf("%i \n", a);
    }
	return 0;
}
