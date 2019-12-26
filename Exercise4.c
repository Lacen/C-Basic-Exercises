#include <stdio.h>


int main() {
	char array[5] = { 'X','M','L','\0' };
	int maxindex = strlen(array) -1;
	char temp = NULL;

	for (int i = 0; i < strlen(array); i++) {
		if (i < maxindex) {
			temp = array[i];
			array[i] = array[maxindex];
			array[maxindex] = temp;
			maxindex = maxindex - 1;
		}
	}
	

	printf("%s\n", array);









	return 0;

}