#include <stdio.h>
int main(void)
{
	int a[2] = {0,1};
	int b[2] = {2,3};
	int *p = a; 
	*p = b[0];
	

	return 0;
}