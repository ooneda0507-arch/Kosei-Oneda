#include <stdio.h>
void ave(int *vc,int n,int *x,double *y){
	int i;
	for(i=0;i<n;i++){
		*x+=*(vc+i);
	}
	*y=(double)*x/n;
}

int main(void){
	int score[]={41,32,92,56,72,34,77};
	int n,total=0;
	double average=0.0;
	
	printf("Input number:\n");
	scanf("%d",&n);
	
	ave(score,n,&total,&average);
	printf("Score:total=%5d ave=%5.1f\n",total,average);
	return(0);
}
