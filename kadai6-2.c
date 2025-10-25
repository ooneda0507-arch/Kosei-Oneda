#include <stdio.h>
int main(void){
	int i,len=0;
	char ch[101];
	printf("Input string:");
	scanf("%s",ch);
	
	while(ch[len]){
		if(len%2==0)
			printf("ch[%d]=%c\n",len,ch[len]-32);
		else
			printf("ch[%d]=%c\n",len,ch[len]);
		len++;
	}
	return(0);
}

