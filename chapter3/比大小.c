#include <stdio.h>
int main(void) {
    int a, b, c, t;
    printf("输入3个数：");
    scanf("%d%d%d", &a, &b, &c);
    printf("输入的3个数为：%d,%d,%d\n",a,b,c);
    if(a>b) {
    	t=a;
    	a=b;
    	b=t;
    } 
    if(a>c) {
    	t=a;
    	a=c;
    	c=t;
    }
    if(b>c) {
    	t=b;
    	b=c;
    	c=t;
    }
	printf("输入的3个数排序为：%d,%d,%d\n",a,b,c);
    return 0;
}