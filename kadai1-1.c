#include <stdio.h>
int main(void){
	int a,b;
	double bmi;
	printf("sinntyou= cm");	scanf("%d",&a);
	printf("taijyu= kg");	scanf("%d",&b);
	
	bmi=10000.0*b/(a*a);
	printf("bmi=%.1f\n",bmi);
	return(0);
}
