#include <stdlib.h>
#include "struct_array_int.h"

void array_int_free(struct array_int array)
{
	if(array.size > 0)
	{
		free(array.data);
		array.size = 0;
	}
}
