// Файл example1_9.c 
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Пример объявления и использования указателей

#include <stdio.h>

int main(int argc, char** argv) {
	int var = 100;
	int* ptr = 0;
	printf("Volume 'var' = %d\n", var);
	ptr = &var;
	*ptr = 200;
	printf("Volume 'var' = %d\n", var);

	return 0;
}