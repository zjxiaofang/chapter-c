#include <stdio.h>
#define n 7
int main(void)
{
	int i,temp;
	int x[n];
	for (int i = 0; i < n; ++i)
	{
		printf("x[%d]",i);
		scanf("%d",&x[i]);
	}

	for (int i = 0; i < n/2; ++i)
	{
		temp = x[i];
		x[i] = x[n-1-i];
		x[n-1-i]=temp;
	}
	
	for (int i = 0; i < n; ++i)
	{
		printf("x[%d]的值是%d\n",i,x[i]);
	}

	return 0;
}