#include <stdio.h>
int main(void)
{
	int n,i;
	int j=2;
	printf("输入一个数");
	scanf("%d",&n);
	
	for (int i = 1; i < n; ++i)
		 j*=2;
	printf("%d\n",j);

	return 0;
}