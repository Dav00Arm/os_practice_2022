#include <stddef.h>
#include <stdio.h>
#include "include.h"

void print_string(const char* str, const size_t size){
	int i;
	for(i = 0; i < size; i++){
		printf("%c", str[i]);
	}
	printf("\n");
}

void print_integer(const int int_value){
	printf("%d\n", int_value);
}

void print_double(const double double_value){
	printf("%f\n", double_value);
}