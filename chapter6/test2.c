#include <stdio.h>
int min3(int a, int b, int c)
{
    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    return min;
}
int main(void)
{	
	printf("%d",min3(1,2,3));
	return 0;
}