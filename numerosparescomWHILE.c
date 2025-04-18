#include <stdio.h>

int main()
{
    int cont = 0;
    int num = 2;
    while(cont < 5){
        printf("%d\n", num);
        num += 2;
        cont++;
    }
    return 0;
}
