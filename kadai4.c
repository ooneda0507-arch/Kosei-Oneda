#include <stdio.h>
void mat_copy(int a[5][5],int b[5][5],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
		}
	}
}

void mat_print(int a[5][5],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
	
int main(void){
	int a[5][5]={{0,1,0,0,0},{0,0,0,0,2},{2,0,0,1,0},{0,0,1,0,0},{0,0,0,2,0}};
	int b[5][5],n=5;
	mat_copy(a,b,n);
	mat_print(a,n);
	printf("\n");
	mat_print(b,n);
	return(0);
}
