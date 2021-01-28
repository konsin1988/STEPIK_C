#include <inttypes.h>
#include <stdlib.h>
#ifndef __ARRAY_INT_
#define __ARRAY_INT_ 1

struct array_int
{
	int64_t* data;
	size_t size;
};

#endif
