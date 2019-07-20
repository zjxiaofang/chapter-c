#include <stdio.h>

int isRunNian(int *a) {
    if ((*a % 4 == 0 && *a % 100 != 0 ) || *a % 400 == 0) return 1;
    else return 0;
}

void is_Right(int *y,int *m,int *d)
{
    do {
        do {
            do {           
                if (*y < 1) {
                    printf("重新输入年");
                    scanf("%d", &*y);
                }
            } while (*y < 1);
            if (*m < 1 || *m > 12) {
                printf("重新输入月"); scanf("%d", &*y);
            }
        } while (*m < 1 || *m > 12);

        int n = isRunNian(&*y);
        if (*d < 1 || *d > 31) {
            printf("重新输入日"); scanf("%d", &*d);
        }
        if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
            while (*d == 31) {
                printf("重新输入日"); scanf("%d", &*d);
            }
        }

        if (*m == 2) {
            if (n == 1) {
                while (*d > 28) {
                    printf("重新输入日"); scanf("%d", &*d);
                }
            } else {
                while (*d > 29) {
                    printf("重新输入日"); scanf("%d", &*d);
                }
            }
        }

    } while (*d < 1 || *d > 31);
}

void increment_date(int *y, int *m, int *d) {
    int n = isRunNian(&*y) ;
    if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
        if (*d == 30) {
            (*m)++; *d = 1;
        } else (*d)++;
    }

    else  if (*m == 2) {
        if (n == 1) {
            if (*d == 28) {
                (*m)++; *d = 1;
            } else d++;
        } else {
            if (*d == 29) {
                (*m)++;*d = 1;
            } else (*d)++;
        }
    }

    else if (*m == 12) {
        if (*d == 31) {
            (*y)++; *m = 1; *d = 1;
        } else (*d)++;
    }

    else {
        if (*d == 31) {
            (*m)++; *d = 1;
        } else (*d)++;
    }
}

void decrement_date(int *y, int *m, int *d) {
    int n = isRunNian(&*y) ;
    if (*m == 5 || *m == 7 || *m == 10 || *m == 12) {
        if (*d == 1) {
            (*m)--; *d = 30;
        } else (*d)--;
    }

    else  if (*m == 3) {
        if (n == 1) {
            if (*d == 1) {
                (*m)--; *d = 28;
            } else d--;
        } else {
            if (*d == 1) {
                (*m)--; *d = 29;
            } else (*d)--;
        }
    }

    else if (*m == 1) {
        if (*d == 1) {
            (*y)--; *m = 12; *d = 31;
        } else (*d)--;
    }

    else {
        if (*d == 1) {
            (*m)--;  *d = 31;
        } else (*d)--;
    }
}

int main(void) {
    int y, m, d;
    printf("请输入年份"); scanf("%d", &y);
    printf("请输入月份"); scanf("%d", &m);
    printf("请输入日"); scanf("%d", &d);
    is_Right(&y,&m,&d);
    
    printf("输入的年份为%d年%d月%d日\n", y, m, d);
    increment_date(&y, &m, &d);
    printf("下一天为%d年%d月%d日\n", y, m, d);
    decrement_date(&y, &m, &d);
    decrement_date(&y, &m, &d);
    printf("上一天为%d年%d月%d日\n", y, m, d);

    return 0;
}

    /*
int main(void) {
    int y, m, d, n;
    printf("请输入年份");
    scanf("%d", &y);
    while (y < 1) {
        printf("重新输入年"); scanf("%d", &y);
    }
    n = isRunNian(&y);

    printf("请输入月份");
    scanf("%d", &m);
    while (m < 1 || m > 12) {
        printf("重新输入月"); scanf("%d", &y);
    }

    printf("请输入日");
    scanf("%d", &d);
    while (d < 1 || d > 31) {
        printf("重新输入日"); scanf("%d", &d);
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        while (d == 31) {
            printf("重新输入日"); scanf("%d", &d);
        }
    }

    if (m == 2) {
        if (n == 1) {
            while (d > 28) {
                printf("重新输入日"); scanf("%d", &d);
            }
        } else {
            while (d > 29) {
                printf("重新输入日"); scanf("%d", &d);
            }
        }
    }
    return 0;
}
    */
