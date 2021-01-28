#include <inttypes.h>
#include <stdbool.h>
#ifndef __MAYBE_INT64_
#define __MAYBE_INT64_ 1

struct maybe_int64 
{
	bool valid;
	int64_t value;
};
#endif
