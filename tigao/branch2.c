#include <stdio.h>
int main(void) {
    char week;
    char sec;
    printf("输入首字母:");
    scanf("%c", &week);
    switch (week) {
    case ('M'): puts("周一"); break;

    case ('T'): {
        printf("输入二字母:");
        getchar();
    	scanf("%c", &sec);
        if (sec == 'u') puts("周二");
        else puts("周四");
    };break;

    return 0;
    }
}