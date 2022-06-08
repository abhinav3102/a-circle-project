#include <stdio.h>
#define PI 3.14

int main(){

	int radius;
	float area;
	float circumference;

	printf("Enter radius of the circle: ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	circumference = 2*PI*radius;
	printf("Area of the circle = %0.3f \n", area);

	return 0;
}
