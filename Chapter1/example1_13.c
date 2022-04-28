// Файл example1_13.c
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Разыменование обобщенного указателя вызывает ошибку компиляции

#include <stdio.h>

int main(int argc, char** argv) {
	int var = 9;
	int* int_ptr = &var;
	void* gptr = int_ptr;
	printf("%d\n", *gptr);

	return 0;
}