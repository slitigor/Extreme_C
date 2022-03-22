// Файл example1_15.c
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Попытка спровоцировать ошибку сегментации

#include <stdio.h>

int* create_an_integer(int default_value) {
	int var = default_value;
	return &var;
}

int main(int argc, char** argv) {
	int* int_ptr = NULL;
	int_ptr = create_an_integer(10);
	printf("%d\n",*int_ptr);

	return 0;
}