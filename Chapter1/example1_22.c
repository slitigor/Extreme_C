// Файл example1_22.c
// Книга "Extreme C" Amini K. Часть 1. Структуры
// Вывод количества байтов, выделенных для структурной переменной
// Объявление упакованной структуры

#include <stdio.h>

struct __attribute__((__packed__)) sample_t {
	char first;
	char second;
	char third;
	short fourth;
};

void print_size(struct sample_t* var) {
	printf("Size: %lu bytes\n", sizeof(*var));
}

void print_bytes(struct sample_t* var) {
	unsigned char* ptr = (unsigned char*)var;
	for (int i = 0; i < sizeof(*var); i++) {
		printf("%d ", (unsigned int)*ptr);
		ptr++;
	}
	printf("\n");
}

int main(int argc, char** argv) {
	struct sample_t var;
	var.first = 'A';
	var.second = 'B';
	var.third = 'C';
	var.fourth = 765;
	print_size(&var);
	print_bytes(&var);

	return 0;
}