#include <stdio.h>
int main(void)
{
	int i,n;
	printf("整数值：");
    scanf("%d", &n);
    
    for(i = 1;i<=n;i++){
    	printf("%d ", i);
    }
	puts("");

	return 0;
}