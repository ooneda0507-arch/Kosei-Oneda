#include <stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(void){
	int a,b;
	a=2;b=4;
	swap(&a,&b);
	printf("%d,%d\n",a,b);
	return(0);
}
	
	
	
