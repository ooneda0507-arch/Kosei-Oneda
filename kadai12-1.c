#include <stdio.h>
typedef struct{
	char name[20];
	int math;
	int eng;
	double ave;
}score;

void objave(score *student){
	student->ave=(student->math+student->eng)/2.0;
}

void eval(score *nomo,score *matsui,score data[]){
	if(nomo->ave > matsui->ave){
		data[0]=*matsui;
		data[1]=*nomo;
	}
	else{
		data[0]=*nomo;
		data[1]=*matsui;	
	}
}

int main(void){
	score nomo={"Nomo",78,64},matsui={"Matsui",64,30},data[2];
	int i,num=2;
	objave(&nomo);
	objave(&matsui);
	eval(&nomo,&matsui,data);
	for (i=0;i<num;i++){
		printf("%-10s: math=%d eng=%d ave=%4.1f\n",data[i].name,data[i].math,data[i].eng,data[i].ave);
	}
	return(0);
}
