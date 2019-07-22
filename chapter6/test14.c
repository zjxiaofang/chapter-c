#include <stdio.h>
int main(void)
{
	static double sa[5];
	for (int i = 0; i < 5; i++)
        printf("sa[%d] = %f\n", i, sa[i]);
	return 0;
}