#include <stdio.h>
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]){
		s[i] = toupper(s[i]);
		i++;
	}
}

void str_tolower(char s[])
{
    int i = 0;
    while (s[i]) {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main(void)
{
	char str[128];

	printf("zifu");
	scanf("%s",str);

	str_toupper(str);
	printf("大写字母：%s\n", str);

    str_tolower(str);
    printf("小写字母：%s\n", str);

	return 0;
}