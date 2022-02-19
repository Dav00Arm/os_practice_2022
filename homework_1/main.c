#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "include.h"

int main(int argc, char** argv){
	char* message = "string";
	print_string(message, strlen(message));
	print_integer(10);
	print_double(1.234);
	return 0;
}
