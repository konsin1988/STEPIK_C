#include <stdio.h>
#include <inttypes.h>

int64_t read_int64()
{
	int64_t tmp;
	scanf("%"SCNd64, &tmp);
	return tmp;
}
