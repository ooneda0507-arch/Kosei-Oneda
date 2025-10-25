#include <stdio.h>
void bitprint(int X){
	int i;
	for(i=7;i>=0;i--){
		printf("%d",X>>i&0x01);
	}
	printf("b\n");
}

int main(void){
	int X;
	printf("imputX=");	scanf("%d",&X);
	bitprint(X);
	return(0);
}
