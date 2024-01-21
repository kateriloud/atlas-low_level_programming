#include <stdio.h>
#include <stdlib.h>

int main (){

	int n = rand() % 200 - 100;

	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n < 0) {
		printf("%d is negative\n", n);
	} else {
		printf("%d is zer\n", n);
	}

	return 0;
}
