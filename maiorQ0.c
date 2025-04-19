#include <stdio.h>

int main()
{
    int numero;
    printf("Digite o número: \n");
    scanf("%d", &numero);
    if (numero > 0){
        printf("Positivo");
    }else{
        printf("Negativo");
    }
    return 0;
}
