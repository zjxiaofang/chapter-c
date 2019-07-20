#include <stdio.h>
int main(void) {
    int a, b;
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);
    if(a>b)
    	puts("A大于B");
    else if(a<b)
    	puts("A小于B");
    else
    	puts("A等于B");

    return 0;
}