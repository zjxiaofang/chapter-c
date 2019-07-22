#include <stdio.h>
#include <math.h>
int bian(int i)
{
	int j=sqrt(i);
	return j;
}

int main(void)
{
	int i = 9;
	printf("长度为%d\n",bian(i) );
	return 0;
}