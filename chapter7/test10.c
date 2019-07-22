#include <stdio.h>
int main(void)
{
	
	float x;
	for (x = 0.0; x < 1.0; x+=0.01)
	{
		printf("%f   ",x);
	}


	int i;float x;
	for (int i = 0; i < 100; ++i)
	 {
	 	x = i/100.0;
	 	printf("%f  ",x );
	 } 
	return 0;
}