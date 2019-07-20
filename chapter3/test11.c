#include <stdio.h>
int main(void)
{
	int a,b;
	puts("输入2个整数:");
	printf("第一个是：");scanf("%d",&a);
	printf("第二个是：");scanf("%d",&b);
	if (a-b<10 || b-a>10) 
		puts("它们的差小于10");
	else 
		puts("它们的差大于等于10");
	return 0;
}