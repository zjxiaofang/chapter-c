#include <stdio.h>

void put_stringn(const char s[],int n)
{
	for (int i = 0; i < n; ++i)
		{
			// int j = 0;
			// while(s[j]) putchar(s[j++]);puts("");
			printf("%s\n",s );
		}	
}

int main(void)
{
	char str[128]  ;
	printf("输入");scanf("%s",str);
	printf("显示");put_stringn(str,4);puts("");

	return 0;
}