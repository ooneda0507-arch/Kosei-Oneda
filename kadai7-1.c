#include <stdio.h>
void mycat(char cs1[],const char cs2[]){
	int len=0,i=0;
	while(cs1[len])	len++;
	
	while(cs2[i]){
		cs1[len++]=cs2[i++];
	}
	cs1[len+1]='\0';		
}
	

int main(void){
	char cs1[21],cs2[11];
	printf("Input the first strings:");	scanf("%s",cs1);
	printf("Input the second strings:");	scanf("%s",cs2);
	mycat(cs1,cs2);
	printf("Concatenated strings is %s\n",cs1);
	return(0);
}
