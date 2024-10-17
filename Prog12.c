#include <stdio.h>

int main()
{
    int a, b, resp;
    char ret = 's', op;
    
    printf("\t\tCalculadora\n");
    
    while(ret == 's' || ret == 'S'){
        printf("==>Escolha a operação a ser realizada<==\n");
        printf("(a)Soma\n");
        printf("(b)Subtração\n");
        printf("(c)Multiplicação\n");
        printf("(d)Divisão\n");
        scanf("%c", &op);
        
        printf("Digite um Número: \n");
        scanf("%i", &a);
        printf("Digite um Número: \n");
        scanf("%i", &b);
        
        switch(op){
            case 'a':
            case 'A':
                resp = a + b;
                printf("Resposta: %i\n", resp);
                break;
            case 'b':
            case 'B':
                resp = a - b;
                printf("Resposta: %i\n", resp);
                break;
            case 'c':
            case 'C':
                resp = a * b;
                printf("Resposta: %i\n", resp);
                break;
            case 'd':
            case 'D':
                resp = a / b;
                printf("Resposta: %i\n", resp);
                break;
            default:
                printf("A letra não corresponde a uma operação\n");
                break;
        }    
          printf("Deseja Continuar? ");
        scanf(" %c", &ret);
    }
    
      
    return 0;
}
