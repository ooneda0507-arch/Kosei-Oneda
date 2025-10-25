#include <stdio.h>
struct score{
	char name[20];
	int math;
	int eng;
};

int main(void){
	struct score nomo={"Nomo",78,64},matsui={"Matsui",65,30};
	printf("name:%-10s math:%d eng:%d\n",nomo.name,nomo.math,nomo.eng);
	printf("name:%-10s math:%d eng:%d\n",matsui.name,matsui.math,matsui.eng);
	return(0);
}
