#include <stdio.h>
int main(void)
{
	printf("sizeof(\"123\")=%u\n",(unsigned)sizeof("123"));
	printf("sizeof(\"AB\\tc\")=%u\n",(unsigned)sizeof("AB\tC"));
	printf("sizeof(\"abc\\0def\"=%u\n",(unsigned)sizeof("abc\0def"));
printf("%s\n","abc\0def" );

	return 0;
}