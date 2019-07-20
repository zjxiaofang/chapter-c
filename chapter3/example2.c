#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入一个数:");
	scanf("%d",&a);
	if (a%2) 
		puts("您输入的是奇数:");
	else 
		puts("您输入的是偶数:");

	return 0;
}