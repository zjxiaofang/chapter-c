#include <stdio.h>

void put_chars(float ch,float n){
    while(n--) putchar(ch);
}

int main(void)
{
    double i, len;

    printf("生成一个直角在右下方的等腰直角三角形。\n");
    printf("短边：");
    scanf("%lf", &len);

    for (i = 1; i <= len; i++)
    {
        put_chars(' ', len - i);
        put_chars('*', i);
        putchar('\n');
    }

    return 0;
}