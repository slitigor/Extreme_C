// Файл example1_12.c 
// Книга "Extreme C" Amini K. Часть 1. Указатели
// Перебор элементов массива с помощью арифметики указателей

#include <stdio.h>

#define SIZE 5

int main(int argc, char** argv) {
	int arr[SIZE] = {9, 22, 30, 23, 18};
	int* int_ptr = arr;
	
	for(;;) {
		printf("%d\n", *int_ptr);
		if (int_ptr == &arr[SIZE - 1]) break;
		int_ptr++;
	}

	return 0;
}