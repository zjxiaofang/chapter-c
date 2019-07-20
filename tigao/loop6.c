#include <stdio.h>
int main(void)
{
	int i,j,count;
	printf("高");
	scanf("%d",&count);
/*
	for (int i = 1; i <= count; ++i)
	{
		for (j = 1; j <=count-i; ++j)
			printf(" ");
		for (j= 1;j<=2*i-1;j++)
			printf("*");
			puts("");	
	}
*/
/*
	for (int i = 1; i <= count; ++i)
	{
		for (j = 1; j <i; ++j)
			printf(" ");
		for (j= 1;j<=2*count-2*i+1;j++)
			printf("*");
			puts("");	
	}
*/
	return 0;
}