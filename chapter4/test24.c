#include <stdio.h>
int main(void) {
    int i, j, a;
    printf("输入几层：");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        /* 		
        for(j=1;j<=a-i;j++)
        	putchar(' ');
        for(j=1;j<2*i;j++){
        	putchar('*');
        }
        */正金字塔
        
        for (j = 1; j < i; j++)
            putchar(' ');
        for (j = 1; j <= 2 * (a + 1 - i) - 1; j++)
            putchar('*');

        puts("");
    }
    return 0;
}