#include <stdio.h>

int main()
{
    char letra;
    printf("Insira um caractere: ");
    scanf("%c", &letra);
    
    switch (letra) {
        case 'a':
            printf("É uma vogal.");
            break;
        case 'e':
            printf("É uma vogal.");
            break;
        case 'i':
            printf("É uma vogal.");
            break;
        case 'o':
            printf("É uma vogal.");
            break;
        case 'u':
            printf("É uma vogal.");
            break;
        default:
            printf("É uma consoante");
    }
    return 0;
}
