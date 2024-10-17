#include <stdio.h>

int main()
{
    int a, b;
    char s;
    do{
        printf("\t Tabuada\n");
        printf("Digite um Número entre 2 e 9:");
        scanf("%i", &a);
        for(int n = 1; n <= 10; n++){
            b = a * n;
            printf("%i * %i = %i\n", a, n, b);
        }
        printf("Novo Calculo? (S/N)");
        scanf(" %c", &s);
        }
     while (s == 's' || s == 'S');
	return 0;
}
