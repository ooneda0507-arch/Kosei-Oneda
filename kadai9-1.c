#include <stdio.h>
void s_print(int *vc,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d-th score:%5d\n",i,*(vc+i));
	}
}
	
int main(void){
	int score[]={41,32,92,56,72,34,77};
	int n;
	printf("Input number:\n");
	scanf("%d",&n);
	s_print(score,n);
	return(0);
}
