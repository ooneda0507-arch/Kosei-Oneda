#include <stdio.h>
int main(void){
	FILE *fp;
	int n,i,in_data;
	printf("Input number:");	scanf("%d",&n);
	fp=fopen("output.dat","w");
	if(fp==NULL){
		printf("Cannot open file \n");
	}
	for(i=0;i<=n;i++){
		fprintf(fp,"%d\n",i*i);
	}
	fclose(fp);
	
	fp=fopen("output.dat","r");
	if(fp==NULL){
		printf("File not found\n");
	}
	while(fscanf(fp,"%d\n",&in_data)!=EOF){
		printf("File data =%d\n",in_data);
	}
	fclose(fp);
	return(0);
}


