#include <stdio.h>

void null_string(char s[])
{
	int len = 0;
	while(s[len]){
		s[len] = '\0';
	}
}
int main(void)
{
	char str[128];
	printf("输入一个字符串");scanf("%s",str);
	null_string(str);
	printf("这个字符串为%s\n",str );

	return 0;
}