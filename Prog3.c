#include <stdio.h>

int main()
{
    int num1,num2, adição, subtração, multiplicação, divisãoR, divisaoQ;
    
    printf("Digite um Número: \n");
    scanf("%d", &num1);
    
    
    printf("Digite um Número: \n");
    scanf("%d", &num2);
    
    adição = num1 + num2;
    subtração = num1 - num2;
    multiplicação = num1 * num2;
    divisaoQ = num1 / num2;
    divisãoR = num1 % num2;
    
    printf("Adição: %d \n", adição);
    printf("Subtração: %d \n", subtração);
    printf("Multiplicação: %d \n", multiplicação);
    printf("Divisão Quociente: %d \n", divisaoQ);
    printf("Divisão Resto %d ", divisãoR);
    

    return 0;
}
