//display radius, height volume and surface area
/*radius, height, volume and surface area
name:Miyoge Sharon Nyatichi
reg no:PA106/28285/25
description : system to display radius,height,volume and surface area
*/
#include <stdio.h>
int main() {

	float radius, height, volume, surfacearea;
	printf("radius\n");
	scanf("%f", &radius);
	printf("height\n");
	scanf("%f", &height);
	volume = 3.14159 * radius * radius * height;
	surfacearea = 2 * 3.14159 * radius * radius + 2 * 3.14159 * radius * height;
	printf("The volume of the cylinder is %.2f\n", volume);
	printf("The surface area of the cylinder is %.2f\n", surfacearea);

	return 0;
}