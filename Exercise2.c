#include  <stdio.h>



int main() {
	//Check the C Version and print it out
#if __STDC_VERSION__ >=  201710L
		printf("C18!\n");
#elif __STDC_VERSION__ >= 201112L
		printf("C11!\n");
#elif __STDC_VERSION__ >= 199901L
		printf("C99!\n");
#else
		printf(" C89/C90!\n");
#endif
		return 0;
	
}
