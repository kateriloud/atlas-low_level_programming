#include <stdio.h>
#include <stdlib.h>

int main (){

	int n = rand();

	if (n > 0) {
		printf("%d is positive\n");
	} else if (n < 0) {
		printf("%d is negative\n");
	} else {
		printf("%d is zero\n");
	}

	return 0;
}
