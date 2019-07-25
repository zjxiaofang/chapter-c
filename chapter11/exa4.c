#include <stdio.h>

int main(void)
{
    int i;
    char a[][5] = {"LISP", "C", "Ada"};
    char b[][5] = {"PAUL", "Xsd", "MAC"};
    char *p = &a[0][5];

    for (i = 0; i < 3; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    //for (i = 0; i < 3; i++){
        //printf("p[%d] = \"%c\"\n", i, p[i][2]);
    printf("%c\n",*p);
    printf("%lu\n",sizeof(*p));

    return 0;
}