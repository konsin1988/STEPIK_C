#include <stdio.h>
#include <inttypes.h>
#include "array_int_get.h"
#include "struct_maybe_int64.h"
#include "struct_array_int.h"

void array_int_print(struct array_int array)
{
	for(size_t i=0; i<array.size; ++i)
	{
		printf("%"PRId64" ", array_int_get(array, i).value); 
	}
}
