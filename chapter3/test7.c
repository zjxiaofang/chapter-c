#include <stdio.h>
int main(void)
{
	int a,b,c,d,max;
	printf("输入四个整数:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("四个整数分别是%d,%d,%d,%d\n",a,b,c,d);
	max = a;

	if (b > a) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	printf("最大的数是%d\n",max);

	return 0;
}