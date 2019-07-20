#include <stdio.h>
#define number 5
int main(void) {
    int i, max, min;
    int tensu[number];
    for (int i = 0; i < number; ++i) {
        printf("第%d学生的成绩为：", i + 1);
        scanf("%d", &tensu[i]);
    }
    max = tensu[0] = min;
    for (i = 1; i < number; ++i) {
        //(max>tensu[i])?max=tensu[i]: ;
        max = (max > tensu[i]) ? max : tensu[i];
        min = (min < tensu[i]) ? min : tensu[i];
    }
    printf("最大：%-3d最小:%-3d\n", max, min);


    return 0;
}