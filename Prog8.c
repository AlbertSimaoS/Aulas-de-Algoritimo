#include <stdio.h>

int main()
{
    int n1, n2, res;
    char resp = 's';
    while (resp == 's' || resp == 'S')
    {
        printf("\033[2J");   //limpa a tela
        printf("\033[1;35H");  //posiciona o cursor
        printf("\t\tAdição\n"); 
        printf("Número 1: ");
        scanf("%d", &n1);
        printf("Número 2: ");
        scanf("%d", &n2);
        res = n1 + n2;
        printf("Total: %d\n", res);
        printf("Novo Cálculo? (S/N): ");
        scanf(" %c", &resp);
    }
    return 0;
}
