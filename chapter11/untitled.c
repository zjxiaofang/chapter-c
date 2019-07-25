#include <stdio.h>
int main(void)
{
	int i=10; //定义了一个整型变量 
int *p=&i; //定义了一个指针指向这个变量 
int **p1=&p; //定义了一个二级指针指向p指针 
 
printf(“i=[%d]\n”,*p); 
printf(“i=[%d]\n”,**p1);


	return 0;
}