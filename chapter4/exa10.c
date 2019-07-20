#include <stdio.h>
int main(void) {
    int a;

    do {
        printf("请输入一个正整数");
        scanf("%d", &a);
        if (a < = 0)
            puts("你输入的值是不是正数");
    } while (a <= o);

    printf("该正整数的逆序是：");

  	while (a > 0) {
  		printf("%d",a%10);
  		a /= 10;
  	}

  	puts("。");

    return 0;
} 