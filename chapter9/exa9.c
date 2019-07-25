#include <stdio.h>

void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];
	printf("请输入字符");scanf("%s",str);
	printf("您输入的是"); put_string(str);

	return 0;
}