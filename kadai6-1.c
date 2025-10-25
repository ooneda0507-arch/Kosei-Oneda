#include <stdio.h>
int main(void){
	char x;
	printf("Input character \n");
	x=getchar();
	if(x>='a' && x<='z')
		x-=32;
	printf("comverted character is %c\n",x);
	return(0);
}

