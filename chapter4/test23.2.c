#include <stdio.h>
int main(void)
{
	int i, j, len;
    puts("直角在右上方的直角三角形");
    printf("高:"); scanf("%d", &len);
    
    for(i=1;i<=len;i++) {
        for(j=1;j<i;j++)
            putchar(' ');
    	for(j=len;j>=i;j--)
    		putchar('*');
    	
    	puts("");
    }

	return 0;
}