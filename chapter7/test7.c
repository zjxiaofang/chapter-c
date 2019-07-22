#include <stdio.h>
int main(void)
{
	float i;double j;long double k;
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
	printf("%lu\n", sizeof(long double));

	printf("float  " );scanf("%f",&i);
	printf("%f\n", i);

	printf("double  " );scanf("%f",&j);
	printf("%f\n", j);

	printf("long double  " );scanf("%lf",&k);
	printf("%lf\n", k);


	return 0;
}