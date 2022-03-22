// Файл example1_17.c
// Книга "Extreme C" Amini K. Часть 1. Функции
// Пример вызова функции с передачей по значению

#include <stdio.h>

void func(int a) {
	a = 5;
}

int main(int argc, char** argv) {
	int x = 3;
	printf("Before function call: %d\n", x);
	func(x);
	printf("After function call: %d\n", x);

	return 0;
}