#include <stdio.h>
void mycat(char *cs1,char *cs2){
	while(*cs1) cs1++;
	while(*cs2) *cs1++=*cs2++;
	*cs1='\0';
}

int main(void){
	char cs1[21],cs2[11];
	
	printf("Input the first number:\n");	scanf("%s",cs1);
	printf("Input the second number:\n");	scanf("%s",cs2);
	
	mycat(cs1,cs2);
	printf("Concatenated strings is %s \n",cs1);
	return(0);
}
