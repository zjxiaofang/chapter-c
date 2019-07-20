#include <stdio.h>

int main(void)
{
	int a,b;int c=1;
	a = b-- = ++c;
	printf("%d\n",a );

	return 0;
}