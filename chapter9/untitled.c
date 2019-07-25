#include <stdio.h>
#include <string.h>

#define NUM 8

int main(void) {

    char s[NUM][128];

    int i;
    int end = NUM;

    char str[] = "$$$$$";

    for (i = 0; i < NUM; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (strcmp(s[i], str) == 0) {
            end = i;
            break;
        }
    }

    for (i = 0; i < end; i++) {

        printf("s[%d] = \"%s\"\n", i, s[i]);

    }

    return 0;
}