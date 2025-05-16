#include <stdio.h>

int main()
{
    int numero, i, soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; i++) {
        soma += i;
    }   

    printf("A soma de todos os inteiros de 1 até %d é %d.\n" ,numero, soma);
    return 0;
}
