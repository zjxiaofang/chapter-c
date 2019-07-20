#include <stdio.h>
int main(void)
{
	int so = 178;
	int sa = 175;
	int mi = 179;

	int *io,*ho;

	io = &so;
	ho = &mi;

	printf("%d\n",*io);
	printf("%d",*ho);

	io = &sa;
	*ho = 180;

	putchar('\n');
	printf("%d\n",so );
	printf("%d\n",sa );
	printf("%d\n", mi);
	printf("%d\n",*io );
	printf("%d\n",*ho );


	return 0;
}