#include <stdio.h>
struct score{
	char name[20];
	int math;
	int eng;
	double ave;
};

void objave(struct score *student){
	student->ave=(student->math+student->eng)/2.0;
}

int main(void){
	struct score nomo={"Nomo",78,64},matsui={"Matsui",65,30};
	objave(&nomo);
	printf("name:%-10s math:%d eng:%d ave:%4.1f\n",nomo.name,nomo.math,nomo.eng,nomo.ave);
	objave(&matsui);
	printf("name:%-10s math:%d eng:%d ave:%4.1f\n",matsui.name,matsui.math,matsui.eng,matsui.ave);
	return(0);
}
