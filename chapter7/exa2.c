#include <stdio.h>
#include <limits.h>
int main(void)
{
	if(CHAR_MIN)
		puts("有符号的");
	else
		puts("无符号");
	return 0;
}