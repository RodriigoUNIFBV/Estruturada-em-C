#include <stdio.h>

int main()
{
    int nota;
    printf("Digite a nota do aluno entre 0 e 100: \n");
    scanf("%d", &nota);
    
    if (nota <= 100 && nota >= 90){
        printf("Classificação A");
    }else if (nota <= 89 && nota >= 80){
        printf("Classificação B");
    }else if (nota <= 79 && nota >= 70){
        printf("Classificação C");
    }else if (nota <= 69 && nota >= 60){
        printf("Classificação D");
    }else{
        printf("Classificação F");
    }
}
