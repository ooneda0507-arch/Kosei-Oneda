#include <stdio.h>
#include <math.h>
void complex(double *a,double*p){
	double x,y;
	x=*a*cos(*p);
	y=*a*sin(*p);
	*a=x;
	*p=y;
}
int main(void){
	double a,b;
	printf("Input a :");	scanf("%lf",&a);
	printf("Input b :");	scanf("%lf",&b);
	complex(&a,&b);
	printf("x=%.1f y=%.1f\n",a,b);	
	return(0);
}
	
	
	
