#include <stdio.h>

void put_string(const char *s)
{
	// while(*s++)
	// 	putchar(*(s-1));
	while(*s){
		putchar(*s);
	 s++;
	}
}
int main(void)
{
	char str[] = "adawer"; 
	put_string(str);

	return 0;
}