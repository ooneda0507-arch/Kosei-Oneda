#include <stdio.h>
void add_sub(int *x,int *y){
	int temp;
	temp=*x;
	*x=*x+*y;
	*y=temp-*y;	
}
	
int main(void){
	int a,b;
	printf("Input a and b \n");
	scanf("%d %d",&a,&b);
	add_sub(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return(0);
}
