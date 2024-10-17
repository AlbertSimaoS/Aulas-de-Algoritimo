#include <stdio.h>

int main()
{
    float SB = 0;
    float INSS = 0;
    float IRPE = 0;
    float descontos = 0;
    float SalarioLiquido = 0;
    
    printf("Digite o Sálario Bruto:");
    
    scanf("%f", &SB);
    
    printf("Salário Bruto: %.2f \n", SB );
    
    INSS = 0.13 * SB;
    
    printf("INSS: %.2f \n", INSS);
    
    
    if (SB > 9900) {
        IRPE = 0.1 * SB;
        printf("IRPE: %.2f \n", IRPE);
    } else {
        IRPE = 0.05 * SB;
        printf("IRPE: %.2f \n", IRPE);
        
    }
    
    descontos = INSS + IRPE;
    
    SalarioLiquido = SB - descontos;
    
    printf("Salario Líquido: %.2f", SalarioLiquido);

    return 0;
}
