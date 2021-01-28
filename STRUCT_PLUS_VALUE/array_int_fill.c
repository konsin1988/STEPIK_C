#include <stdio.h>
#include <inttypes.h>
#include "read_int64.h"

void array_int_fill(int64_t* array, size_t size)
{
	for(size_t i=0; i<size; ++i)
	{
		array[i] = read_int64(); 
	}
}
