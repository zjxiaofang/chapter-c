#include <stdio.h>
int main(void)
{
    int i, j, len;
    puts("直角在右上方的直角三角形");
    printf("高:"); scanf("%d", &len);
    int j =1;
    for(i=1;i<=len;i++) {

        if(j<i){
            putchar(' ');
            j++;
        }else 
            putchar('*');
        
        
        puts("");
    }

    return 0;
}