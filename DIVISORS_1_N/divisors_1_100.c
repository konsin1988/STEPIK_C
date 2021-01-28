#include <stdio.h>
#include "divisors.h"

int main(int argc, char* argv[]) {
	int num;
	printf("Enter the number of items: ");
	scanf("%d", &num);
	int i = 1;
	for (i; i <= num; ++i) {
		printf("%d: ", i);
		divisors(i);
		printf("\n");
	}
	return 0;
}

