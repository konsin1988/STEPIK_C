#include <stdio.h>
#include <inttypes.h>
#include "struct_array_int.h"
#include "struct_maybe_int64.h"
#include "array_int_get.h"

struct maybe_int64 array_int_min(struct array_int array)
{
	struct maybe_int64 min = {.valid = array_int_get(array, 0).valid, 
		.value = array_int_get(array, 0).value};
	for(size_t i=0; i<array.size; ++i)
	{
		if(array_int_get(array, i).value < min.value)
		{
			min.value = array_int_get(array, i).value;
			min.valid = true;
		}	
	}
	return min;
}
