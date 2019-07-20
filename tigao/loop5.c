#include <stdio.h>
int main(void)
{
	int i;
	double j = 10000;
	for (int i = 0; i < 5; ++i)
		j*=1.003;
	printf("%.2f",j);

	return 0;
}