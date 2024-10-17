#include <stdio.h>

int main()
{
    float num1, num2, num3, media;
    
    printf("Digite a 1ª Nota: ");
    scanf("%f", &num1);
    
    printf("Digite a 2ª Nota: ");
    scanf("%f", &num2);
    
    printf("Digite a 3ª Nota: ");
    scanf("%f", &num3);
    
    media = ((num1 + num2 + num3) / 3);
    
    if(media > 5.9) {
        printf("Aprovado! :)");
        }else if(media < 4) {
            printf("Reprovado! :(");
         }
    else {
            printf("Aluno apto ao exame final!");
        }

    return 0;
}
