#include <stdio.h>

int str_length(char s[])
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("输入一个字符串");
	scanf("%s",str);

	printf("字符串%s的长度是%d\n",str,str_length(str) );
	return 0;
}