int max3(int a, int b, int c)
{
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int main(void)
{
    int a, b, c;

    puts("请输入三个整数。");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    printf("整数c:"); scanf("%d", &c);

    printf("最大的值是%d。\n", max3(a, b, c));

    return 0;
}