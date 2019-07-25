#include <stdio.h>
void put_string(const char s[])
{
	int len = 0;
	while(s[len]){
		len++;
	}

	for (int j = 0; j <= len; ++j)
	{
		putchar(s[len-j]);
	}
	puts("");
}


int main(void)
{
	char str[128];
	printf("输入一个字符串");scanf("%s",str);
	put_string(str);
	return 0;
}