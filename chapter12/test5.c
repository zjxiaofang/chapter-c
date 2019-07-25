#include <stdio.h>
#include <math.h>

#define sqr(n) n*n

typedef struct {
	double x;double y;
}Pointer;

typedef struct{
	Pointer pt;
	double fuel;
}Car;

double distance_of(Pointer pa,Pointer pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
	printf("%.2f,%.2f\n",c.pt.x,c.pt.y);
	printf("%.2f\n",c.fuel);
}

int move(Car *c,Pointer dest)
{
	double d = distance_of(c->pt,dest);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	Car mycar = {{0.0,0.0},90.0};
	while(1) {
		int select;
		Pointer dest;
		put_info(mycar);
		printf("开动汽车吗【YES---1/NO--0】：");
        scanf("%d", &select);
        if (select != 1)break;
        printf("目的地的X坐标："); scanf("%lf", &dest.x);
        printf("目的地的Y坐标："); scanf("%lf", &dest.y);
        if (!move(&mycar, dest))
            puts("\a燃料不足无法行驶。");
	}

	return 0;
}