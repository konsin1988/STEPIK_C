#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdlib.h> 
#include "struct_array_int.h"
#include "read_size.h"
#include "struct_maybe_int64.h"
#include "array_int_read.h"
#include "array_int_print.h"
#include "array_int_min.h"
#include "array_int_free.h"

int main(int argc, char* argv[])
{
	size_t size;
	printf("Enter the number of items: ");
	read_size(&size);
	printf("Enter the items: \n");
	struct array_int array = array_int_read(size);
	array_int_print(array);
	printf("\n");
	struct maybe_int64 min = array_int_min(array);
	if(min.valid)
		printf("Minimum = %"PRId64"\n", min.value);
	else
		printf("Minimum = %s\n", min.valid? "true": "false");
	array_int_free(array);

	return 0;
}
