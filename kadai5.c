#include <stdio.h>
void oct(int X){
	X=X<<3;
	printf("%d\n",X);
}

void trip(int X){
	X=(X<<1)|X;
	printf("%d\n",X);
}

int main(void){
	int X;
	printf("num:");		scanf("%d",&X);
	
	oct(X);
	trip(X);
	return(0);
}

