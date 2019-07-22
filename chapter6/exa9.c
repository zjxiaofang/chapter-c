#include <stdio.h>

int scan_pint(void) {
    int temp;

    do{
        printf("输入一个正整数");
        scanf("%d",&temp);
        if(temp<1) printf("重新输入");
    }while(temp<1);

    return temp;
    }

int rev_int(int nx)
{
    int a=0;
    while(nx){
        a = a*10 + nx%10;
        nx/=10;
    }
    return a;
}

int main(void) {
    int nx = scan_pint();
    printf("该整数倒转后的值是%d。\n", rev_int(nx));
    return 0;
}