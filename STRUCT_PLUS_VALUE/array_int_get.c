#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include "struct_maybe_int64.h"
#include "struct_array_int.h"

struct maybe_int64 array_int_get(struct array_int array, size_t i)
{
	if(i >= array.size) return (struct maybe_int64) { .valid = false, .value = false};
	else return (struct maybe_int64) { .valid = true, .value = array.data[i] };	
}
