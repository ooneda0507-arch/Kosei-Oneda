#include <stdio.h>
int main(void){
	int x=5;
	int *ptr;
	
	ptr=&x;
	printf("x=%d\n",x);
	printf("ptr=%p\n",ptr);
	printf("*ptr=%d\n",*ptr);
	return(0);
}
	
	
	
