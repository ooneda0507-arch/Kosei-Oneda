#include <stdio.h>
#define MAX_DATA 1000

int MaxNumber(int x[],int N);

int main(void){
	FILE *fpln;
	int data[MAX_DATA];
	int num_data=0,i;
	int max;
	
	if((fpln=fopen("text.txt","r"))==NULL){
		printf("file cannot open \n");
		return(0);
	}
	else{
		while(fscanf(fpln,"%d",data+num_data)!=EOF)
		num_data++;
	}

	for(i=0;i<num_data;i++){
		printf("data[%4d]=%d\n",i,data[i]);
	}
	
	max=MaxNumber(data,num_data);
	printf("the maximum value is %d \n",max);
	return(0);
}

int MaxNumber(int x[],int N){
	int max,i;
	max=x[0];
	for(i=1;i<N;i++){
		if(x[i]>max) max=x[i];
	}
	return(max);
}
	
