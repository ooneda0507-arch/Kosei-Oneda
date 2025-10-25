#include <stdio.h>
int main(void){
	int a,b,i,sum=0;
	printf("a=");	scanf("%d",&a);
	printf("b=");	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("from%dto%d sum=%d\n",a,b,sum);
	return(0);
}
