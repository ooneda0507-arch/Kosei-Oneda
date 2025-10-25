#include <stdio.h>
void set(int a[5][5],int i,int j,int n){
	int k,l;
	a[i][j]=1;
	for(k=0;k<n;k++){
		for(l=0;l<n;l++){
			if(k!=i && l!=j){
				a[k][l]=0;
			}
		}
	}
}

void printpos(int a[5][5],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

void move(int a[5][5],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==1 && i!=0){
				a[i][j]=0;
				a[i-1][j]=1;
			}
		}
	}
}

int main(void){
	int position[5][5]={0};
	int n=5,i,j;
	printf("Enter the position i:");	scanf("%d",&i);
	printf("Enter the position j:");	scanf("%d",&j);
	set(position,i,j,n);
	printpos(position,n);
	printf("\n");
	move(position,n);
	printpos(position,n);
	return(0);
}
