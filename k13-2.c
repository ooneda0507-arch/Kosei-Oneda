#include <stdio.h>
int main(void){
	FILE *fpbin,*fptxt;
	int n=50,i,in_data;
	fpbin=fopen("testdata2024.bin","rb");
	if(fpbin==NULL){
		printf("File not found \n");
	}
	
	fptxt=fopen("outdata.txt","w");
	if(fptxt==NULL){
		printf("Cannot open file\n");
	}
	for(i=0;i<n;i++){
		fread(&in_data,sizeof(int),1,fpbin);
		if(in_data%2){
			fprintf(fptxt,"%d\n",in_data);
		}
	}
	fclose(fpbin);
	fclose(fptxt);
	return(0);
}

