#include <stdio.h>
double bmi(int w,int h){
	double BMI;
	BMI=10000.0*w/(h*h);
	return(BMI);
}

int main(void){
	int height,weight;
	double BMI;
	printf("height=");	scanf("%d",&height);
	printf("weight=");	scanf("%d",&weight);
	BMI=bmi(weight,height);
	if(BMI<18.5)	printf("Underweight");
	else if(18.5<=BMI&&BMI<25.0)	printf("Nomal range");
	else if(25.0<=BMI&&BMI<35.0)	printf("Overweight");
	else if(35.0<=BMI)	printf("Obese");
	printf("\n");
	return(0);
}
