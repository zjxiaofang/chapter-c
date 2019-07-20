#include <stdio.h>

void adjust_point(int *n)
{
	if (*n<0) *n=0;
	else if (*n > 100) *n=100;
}
int main(void)
{
	int i;
	scanf("%d",&i);
	adjust_point(&i);
	printf("%d\n", i);

	return 0;
}