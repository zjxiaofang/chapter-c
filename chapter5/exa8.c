#include <stdio.h>
int main(void)
{
	int i,temp;
	int x[7];
	for (int i = 0; i < 7; ++i)
	{
		printf("x[%d]",i);
		scanf("%d",&x[i]);
	}

	for (int i = 0; i < 3; ++i)
	{
		temp = x[i];
		x[i] = x[6-i];
		x[6-i] = temp;
	}
	
	for (int i = 0; i < 7; ++i)
	{
		printf("x[%d]的值是%d\n",i,x[i]);
	}

	return 0;
}