#include <stdio.h>

int divides(int a, int b) { return a % b == 0; }
void print_newline() { printf("\n"); }

void divisors(int limit) {
    int i = 1;
    for (i; i <= limit; ++i) {
        printf("%d: ", i);
        int j = 2;
        for (j; j <= i; ++j) {
            if (divides(i, j)==1) printf("%d ", j);
        }
	print_newline();
    }
}


int main() {
    divisors(20);
    return 0;
}
