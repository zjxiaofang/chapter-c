#include <stdio.h>

void str_dcount(const char s[],int cnt[])
{
	int i = 0;
	while (s[i]){
		if(s[i] >= '0' && s[i] <= '9'){
			cnt[s[i] - '0']++ ;
		}
		i++;
	}
}

int main(void)
{
	int i;int dcnt[10] = {0};
	char str[128];
	printf("请输入字符串");scanf("%s",str);

	str_dcount(str,dcnt);

	puts("数字字符出现的次数");

	for (int i = 0; i < 10; ++i)
		printf("%d:%d\n",i,dcnt[i]);

	return 0;
}