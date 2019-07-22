#include <stdio.h>
int main(void)
{
	int n;
	printf("sizeof1 = %lu\n",sizeof 1);
	printf("sizeof+1=%u\n",(unsigned)sizeof +1);
	printf("sizeof-1 = %u\n",(unsigned)sizeof -1);
	printf("sizeof(unsigned)-1 = %u\n",(unsigned)sizeof(unsigned)-1 );
	printf("sizeof(double)-1=%u\n",(unsigned)sizeof(double)-1);
	printf("sizeof((double)-1)=%u\n",(unsigned)sizeof((double) - 1) );
	printf("sizeof n+2=%u\n",(unsigned)sizeof n + 2);
	printf("sizeof n+2=%u\n",(unsigned)sizeof(n + 2));
	printf("sizeof n+2=%u",(unsigned)sizeof(n + 2.0));

	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));


	return 0;
}