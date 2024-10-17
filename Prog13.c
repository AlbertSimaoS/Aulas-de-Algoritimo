#include <stdio.h>

int main()
{
    char letra;
    printf("\t\tComando switch\n");
    printf("Digite uma Letra: ");
    scanf("%c", &letra);
    switch (letra)
    {
        case 'a':
        case 'A':
            printf("Abacaxi\n");
            break;
        case 'b':
        case 'B':
            printf("Banana\n");
            break;
        case 'c': 
        case 'C':
            printf("Caju\n");
            break;
        default:
            printf("A letra não corresponde a uma fruta\n");
            break;
    }
    return 0;
}
