#include <stdio.h>
int count(char *s){
	int len=0;
	while(*s){
		if(*s=='t') len++;
		s++;
	}
	return(len);
}

int main(void){
	char str[101];
	printf("Input string:");	scanf("%s",str);
	printf("The number of t is %d \n",count(str));
	return(0);
}
