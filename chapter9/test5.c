#include <stdio.h>

int str_char(const char s[],char c)
{
	int i = 0;
	while(s[i]){
		if(s[i] == 'c')
			return i;
		i++;	
	}
	return -1;
}

int main(void)
{
	char str[128];
	printf("输入一个字符串"); scanf("%s",str);
	printf("%d\n",str_char(str,'c') );

	return 0;
}