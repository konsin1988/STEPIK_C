#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "struct_array_int.h"
#include "array_int_fill.h"

struct array_int array_int_read(size_t size)
{
	if (size>0)
	{
		int64_t* array = (int64_t*)malloc(size * sizeof(int64_t));
		array_int_fill(array, size);
		return (struct array_int) { .data = array, .size = size };
	}
	else return (struct array_int) {0};
}
