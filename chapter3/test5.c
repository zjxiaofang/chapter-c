#include <stdio.h>
int main(void)
{
	int a,b;
	printf("输入2个数:");
	scanf("%d%d",&a,&b);
	printf("这两个数分别为:%d,%d\n",a,b);
	if (a==b) 
		puts("1");
	else
		puts("0");

	return 0;
}