#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student * x, Student * y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

void sort_by_name(Student a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].name[0] > a[j].name[0])
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void) {
    int i, a;
    Student std[NUMBER];
    for (int i = 0; i < NUMBER; ++i) {
        printf("依次输入名字身高体重奖学金");
        scanf("%s%d%f%ld", std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }

    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d %6.1f %7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

    printf("按身高则输入1%d", a);
    if (a == 1) {
        sort_by_height(std, NUMBER);
        puts("\n按身高排序。");

        for (i = 0; i < NUMBER; i++)
            printf("%-8s  %6d %6.1f %7ld\n",
                   std[i].name, std[i].height, std[i].weight, std[i].schols);
    } else {
        sort_by_name(std, NUMBER);
        puts("\n按身高排序。");

        for (i = 0; i < NUMBER; i++)
            printf("%-8s  %6d %6.1f %7ld\n",
                   std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    return 0;
}