// Файл example1_16.c
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Исправленная версия примера 1.15 с помощью кучи

#include <stdio.h>
#include <stdlib.h>

int* create_an_integer(int default_value) {
	int* var_ptr = (int*)malloc(sizeof(int));
	&var_ptr = default_value;
	return var_ptr;
}

int main(int argc, char** argv) {
	int* int_ptr = NULL;
	int_ptr = create_an_integer(10);
	printf("%d\n", *int_ptr);
	free(int_ptr);

	return 0;
}