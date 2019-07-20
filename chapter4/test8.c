#include <stdio.h>
int main(void)
{
	int n;
	printf("输入一个整数：");
	scanf("%d",&n);
	if (n > 0) {

	while (n-->0){
	printf("*");
	}
	putchar('\n'); 

    }

	return 0;
}