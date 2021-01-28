obj = array_int_fill.o array_int_free.o array_int_get.o array_int_min.o array_int_print.o array_int_read.o read_int64.o read_size.o struct_array_int.h struct_maybe_int64.h 
struct_n_value: main.c $(obj)
	gcc $^ -o $@

clean:
	rm *.o

isp:
	rm struct_n_value
