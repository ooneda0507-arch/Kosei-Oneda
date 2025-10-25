#include <stdio.h>
int main(void){
	int a,b,c;
	
	printf("a=");	scanf("%d",&a);
	printf("b=");	scanf("%d",&b);
	printf("c=");	scanf("%d",&c);
	
	if(a>b&&a>c)
		printf("max=a");
	if(b>a&&b>c)
		printf("max=b");
	if(c>a&&c>b)
		printf("max=c");
	return(0);
}
