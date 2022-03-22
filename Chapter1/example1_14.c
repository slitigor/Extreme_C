// Файл example1_13.c
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Пример обобщенной функции

#include <stdio.h>

void print_bytes(void* data, size_t length) {
	char delim = ' ';
	unsigned char* ptr_data = data;
	
	for (size_t i = 0; i < length; i++) {
		printf("%c 0x%x", delim, *ptr_data);
		delim = ',';
		ptr_data++;
	}
	printf("\n");
}

int main(int argc, char** argv) {
	int a = 9;
	double b = 18.9;
	
	print_bytes(&a, sizeof(int));
	print_bytes(&b, sizeof(double));
	
	printf("Size char = %d byte\n", sizeof(char));
	printf("Size int = %d byte\n", sizeof(int));
	printf("Size float = %d byte\n", sizeof(float));
	printf("Size double = %d byte\n", sizeof(double));

	return 0;
}