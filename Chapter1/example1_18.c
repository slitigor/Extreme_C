// Файл example1_18.c
// Книга "Extreme C" Amini K. Часть 1. Функции
// Пример того, что передача по указателю отличается от передачи по ссылке

#include <stdio.h>

void func(int* a) {
	int b = 9;
	*a = 5;
	a = &b;
	printf("\nValue in func(): %d\n", *a);
	printf("Pointer in func(): %p\n\n", (void*)a);
}

int main(int argc, char** argv) {
	int x = 3;
	int* xptr = &x;
	printf("Value before call: %d\n", *xptr);
	printf("Pointer before function call: %p\n", (void*)xptr);
	func(xptr);
	printf("Value after call: %d\n", *xptr);
	printf("Pointer after function call: %p\n", (void*)xptr);

	return 0;
}