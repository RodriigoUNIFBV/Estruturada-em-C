#include <stdio.h>

int main()
{
    int num;
    for (num = 1; num < 11; num++){
        printf("%d\t", num);
    }
    printf("\n");
    for (num = 10; num > 0; num--){
        printf("%d\t", num);
    }
    return 0;
}
