#include <stdio.h>
#include "divisors.h"

int is_divides(int a, int b) {
	return a % b == 0;
}

void divisors(int x) {
	int i = 2;
	for (i; i <= x; ++i) {
		if (is_divides(x, i) == 1) {
			printf("%d ", i);
		}
	}
}
