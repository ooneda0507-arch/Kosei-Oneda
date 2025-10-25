#include <stdio.h>
void max3pointment(int *x,int *y,int *z,int *Max);

int main(void){
	int a,b,c;
	int max;
	a=3,b=2,c=1;
	max3pointment(&a,&b,&c,&max);
	printf("the maximum value is %d \n",max);
	return(0);
}
	
void max3pointment(int *x,int *y,int *z,int *Max){
	*Max=*x;
	if(*y>*Max) *Max=*y;
	if(*z>*Max) *Max=*z;
}
	

