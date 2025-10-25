#include <stdio.h>
void minmax(int data[],int *max, int *min,int n){
	int i;
	*max=data;
	*min=data;
	for(i=0;i<n;i++){
		if(data[i]>*max)	*max=data[i];
		if(data[i]<*min)	*min=data[i];
	}
}

int main(void){
	int score[5]={34,89,56,76,44}
	int n=5, max, min;
	minmax(score,&max,&min,n);
	printf("max=%d,min=%d\n",max,min);
	return(0);
}
