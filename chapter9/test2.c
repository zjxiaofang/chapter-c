#include <stdio.h>
int main(void)
{
	char s[] = "ABC";
		printf("%s\n", s);

	s[0] = '\0';
	printf("字符串s为%s\n", s);
	printf("%lu\n", sizeof(s));

	return 0;
}