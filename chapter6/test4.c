#include <stdio.h>
int sqr(int x)
{
    return x * x;
}
int pow4(int x){
	return sqr(sqr(x));
}
int main(void)
{
	printf("%d\n",pow4(2) );

	return 0;
}