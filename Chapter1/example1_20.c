// Файл example1_20.c
// Книга "Extreme C" Amini K. Часть 1. Указатели на функции
// Вызов разных функций с помощью одного и того же указателя
// Использование псевдонимов типа

#include <stdio.h>

typedef int bool_t;
typedef bool_t (*less_than_func_t)(int, int);

bool_t less_than(int a, int b) {
	return a > b ? 0 : 1;
}

bool_t less_than_modular(int a, int b) {
	return (a % 5) < (b % 5) ? 1 : 0;
}

int main(int argc, char** argv) {
	less_than_func_t func_ptr = NULL;
	
	func_ptr = &less_than;
	bool_t result = func_ptr(3, 7);
	printf("%d\n", result); 

	func_ptr = &less_than_modular;
	result = func_ptr(3, 7);
	printf("%d\n", result); 
	
	return 0;
}