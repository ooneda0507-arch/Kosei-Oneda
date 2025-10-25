#include <stdio.h>
void mycat(char cs1[],const char cs2[]){
	int len=0,i=0;
	while(cs1[len])	len++;
	
	while(cs2[i]){
		cs1[len++]=cs2[i++];
	}
	cs1[len+1]='\0';		
}

void allcat(char cs1[],char cs[][11],int n){
	int i;
	for(i=0;i<n;i++){
		mycat(cs1,cs[i]);
	}
}

int main(void){
	char cs[][11]={"Ohtani","hits","a","ball"};
	char cs1[41];
	int i, n=4;
	allcat(cs1,cs,n);
	printf("Concatenated strings is %s\n",cs1);
	return(0);
}
