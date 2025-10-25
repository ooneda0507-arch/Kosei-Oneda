#include <stdio.h>
int main(void){
	int vc[5]={10,20,30,40,50};
	int *ptr;
	
	ptr=vc;
	
	printf("vc[3]=%d\n",*(ptr+3));
	return(0);
}
