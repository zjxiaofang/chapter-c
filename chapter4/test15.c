#include <stdio.h>
int main(void) {
    int i, j, k;
    do {
        printf("开始数值：");
        scanf("%d", &i);
        printf("结束数值：");
        scanf("%d", &j);
        printf("间隔数值：");
        scanf("%d", &k);
        if (j < i || k > j - i) 
            puts("");
        }while (j < i || k > j - i);
    for (;i<=j;i+=k)
    	printf("%dcm   %.2fkg\n",i,(double)49.50+(i-155)*1.1);
    return 0;
}