#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    
    if (num1 == num2){
        printf("Os números são iguais");
    }else if(num1 > num2){
        printf("O primeiro número %d é maior que o segundo número %d", num1, num2);
    }else{
        printf("O primeiro número %d é maior que o segundo número %d", num2, num1);
    }
    
}
