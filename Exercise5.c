#include <stdio.h>


int main() {

	int length = 0;
	int width = 0;
	printf("Enter Height: ");
	int status = scanf("%d", &length);
	printf("\nEnter Width: ");
	status = scanf("%d", &width);
	printf("\n");
	printf("Perimeter of the rectangle:%d\n", (length * 2 + width * 2));
	printf("Area of the rectangle:%d", (length * width));
}