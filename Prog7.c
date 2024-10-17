#include <stdio.h>

int main()
{
    int n1, n2, d;
    
    printf("Digite um Número: ");
    scanf("%i", &n1);
    
    printf("Digite outro Número: ");
    scanf("%i", &n2);
    
    
    if(n1 > n2){
        
        if((n2 - n1) <= -10){
            d = n1;
            n1 = n2;
            n2 = d;
            printf("\n => A sequência é: <= \n");
            while(n1 < n2-1){
                n1 ++;
                printf("- %i \n", n1);
            }
        }else{
            printf("Os Números não são validos, pois o intervalo entre eles é menor que 10.");
        }
    }else if(n2 > n1){
        if ((n2 - n1) >= 10){
            printf("\n => A sequência é: <= \n");
            while(n1 < n2-1){
                n1 ++;
                printf("- %i \n", n1);
            }
        }else{
            printf("Os Números não são validos, pois o intervalo entre eles é menor que 10.");
        }
    }else if (n1 == n2){
        printf("Os Números não são validos."); 
        
    }
    return 0;
}
