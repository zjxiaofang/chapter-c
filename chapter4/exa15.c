#include <stdio.h>
int main(void)
{
	int i,n;
	printf("整数值：");
    scanf("%d", &i);
    
    for(i = 1;i<=n;i++){
    	if(n%i==0)
    	printf("%d", i);
    }
	puts("");

	return 0;
}