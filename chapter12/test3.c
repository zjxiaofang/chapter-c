#include <stdio.h>

struct xyz {
	int x;
    long y;
    double z;	
};

struct xyz scan_xyz()
{
	struct xyz temp;
	printf("输入值");
	scanf("%d%ld%lf",&temp.x,&temp.y,&temp.z);
	return temp;
}

int main(void) {
	printf("xyz.x = %d\n", scan_xyz().x);
    printf("xyz.y = %ld\n", scan_xyz().y);
    printf("xyz.z = %f\n", scan_xyz().z);

    return 0;
}