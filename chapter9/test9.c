#include <stdio.h>
void put_string(char s[]) {
    int n = 0;
    while (s[n++]) {
    }
    int temp;
    for (int j = 0; j <= n / 2; ++j) {
        temp = s[j];
        s[j] = s[n - j - 1];
        s[n - j - 1] = temp;
    }
    for (int i = 0; i < n; ++i)
    {
    	putchar(s[i]);
    }
    puts("");
}


int main(void) {
    char str[128];
    printf("输入一个字符串"); scanf("%s", str);
    put_string(str);
    return 0;
}