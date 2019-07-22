#include <stdio.h>
int main(void)
{
	double x;double sum1=0;double sum2 = 0;
	for (x = 0.0; x <= 1.0; x+=0.01)
	{
		sum1 += x;	
	}
	printf("%f\n", sum1);

	double y;
	for (int i = 0; i <= 100; ++i)
	{
		y=i/100.0;
		sum2 +=y;
	}
	printf("%f\n", sum2);
	return 0;
}