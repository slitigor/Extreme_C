// Файл example1_19.c
// Книга "Extreme C" Amini K. Часть 1. Указатели на функции
// Вызов разных функций с помощью одного и того же указателя

#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int main(int argc, char** argv) {
	int (*func_ptr)(int, int);
	func_ptr = NULL;
	
	func_ptr = &sum;
	int result = func_ptr(5, 4);
	printf("Sum: %d\n", result);
	
	func_ptr = &subtract;
	result = func_ptr(5, 4);
	printf("Subtract: %d\n", result);

	return 0;
}