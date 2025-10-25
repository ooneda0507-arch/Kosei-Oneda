#include <stdio.h>
typedef struct{
	double x;
	double y;
}Point;

typedef struct{
	Point crt;
	int pfm;
	int tec;
	double time;
}Car;

double distance(Point crt,Point dst){
	double dis;
	dis=(dst.x-crt.x)+(dst.y-crt.y);
	return(dis);
}

void calc(Car *driver,double dist){
	driver->time=dist/(driver->pfm+driver->tec);
}

int main(void){
	Car driverA={0.5,3.2,5,3};
	Point dst={8.5,10.3};
	double dis;
	dis=distance(driverA.crt,dst);
	printf("Distance=%5.1f\n",dis);
	calc(&driverA,dis);
	printf("Required time = %5.3f[hour]\n",driverA.time);
	return(0);
}


