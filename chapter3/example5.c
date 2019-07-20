#include <stdio.h>
int main(void)
{
	int a ;
	printf("请输入一个整数");
	scanf("%d",&a);
	if (a==0)
		puts("输入的数是0");
	else
		puts("输入的数不是0");
	return 0;
}

