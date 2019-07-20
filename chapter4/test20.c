#include <stdio.h>
int main(void) {
    int i,j;
    printf("  |");                  
    for (int i = 1; i <= 9; ++i)    
    {
        printf("%3d",i);
    }
    putchar('\n');                  
    for (int i = 1; i <= 10; ++i)
    {
        printf("---");             
    }
    putchar('\n');
    for (int i = 1; i <=9; ++i)
    {
        printf("%-2d|",i);          
        for (int j = 1; j <= 9; ++j)
        {
            printf("%3d", i*j);
        }
        putchar('\n');
    }
    
    return 0;
}