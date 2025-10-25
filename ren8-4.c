#include <stdio.h>
int main(void){
	int len=0;
	char str[128];
	printf("Input strings:");
	scanf("%s",str);
	
	while(str[len])
		len++;
	printf("Length of %s is %d \n",str,len);
	return(0);
}

