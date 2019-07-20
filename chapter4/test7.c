#include <stdio.h>
int main(void)
{
	int a;
	int b = 1;
	printf(":");
	scanf("%d",&a);

	while (b < a) {
		printf("%d  ",b);
		b*=2;
	}
	printf("\n");

	return 0;
}

