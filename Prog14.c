#include <stdio.h>

int main()
{
    int k;
    int numeros[4] = {1, 5, 9, 15};
    printf("\t\t Vetores\n\n");
    for (k = 0; k < 4; k++)
    {
        printf("%d\n", numeros[k]);
    }
    printf(" O vetor ocupa %d bytes", sizeof(numeros));
    return 0;
}
