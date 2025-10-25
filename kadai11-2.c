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

double distanse(Point crt,Point dst){
	double temp;
	temp=(dst.x-crt.x)+(dst.y-crt.y);
	return(temp);
}

void calc(car *driver,double dist){
	driver->time=dist/(driver->pfm+driver->tec);
}

int main(void){
	Car driverA={0.5,3.2,5,3};
	Point dst={8.5,10.3};
	double dis;
	dis=distance(&);
	printf("Distance=%5.1f\n",dis);
	calc();
	printf("Required time = %5.3f[hour]\n",driverA.time);
	return(0);
}


