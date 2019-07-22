#include <stdio.h>
int main(void)
{
	char str[] = "ABC\0DEF";

	printf("字符串str为\"%s\"",str);

	return 0;
}