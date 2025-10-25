#include <stdio.h>
int main(void){
	int i,j,max,min,sum=0,n=0;
	int score[10]={55,70,63,86,74,62,57,98,58,72};
	double ave;
	
	max=score[0];
	for(j=0;j<10;j++){
		if(score[j]>max){
			max=score[j];
		}
	}
	
	
	
	min=score[0];
	for(j=0;j<10;j++){
		if(score[j]<min){
			min=score[j];
		}
	}
	
	
	for(i=0;i<10;i++){
		sum+=score[i];
	}
	ave=(double)sum/10.0;
	
	for(i=0;i<10;i++){
		if(ave>score[i])
			n=n+1;
	}
	
	printf("Max score:%d\n",max);
	printf("Min score:%d\n",min);
	printf("Average score:%.1f\n",ave);
	printf("Below Average score:%d\n",n);
	return(0);
}
