#include <stdio.h>
int idcode(int class,int num){
	int a;
	a=(class<<6)|num;
	return(a);
}

void bitprint(int X){
	int i;
	for(i=7;i>=0;i--){
		printf("%d",X>>i&0x01);
	}
	printf("b\n");
}

int main(void){
	int class,num,a;
	printf("class:");	scanf("%d",&class);
	printf("num:");		scanf("%d",&num);
	a=idcode(class,num);
	bitprint(a);
	return(0);
} 
