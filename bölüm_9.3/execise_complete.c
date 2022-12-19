#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double a;
	double b;
	double c;
	
	printf("please enter a:");
	scanf("%lf",&a);
	printf("please enter b:");
	scanf("%lf",&b);
	
	c=pow(a,b);
	
	printf("result:%.2lf\n",c);
	
	return 0;		
	
}
