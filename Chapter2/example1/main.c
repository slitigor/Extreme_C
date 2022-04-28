// Файл example2_1.c
// Книга "Extreme C" Amini K. Часть 2. Компиляция и компоновка. 
// Процесс компиляции.
// Главная функция в примере 2.1

#include <stdio.h>
#include "example2_1.h"

int main(int argc, char** argv) {
	// Объявление и инициализация массива
	int array[5] = {10, 3, 5, -8, 9};
	
	// Вычисление среднего значения с помощью функции avg()
	double average = avg(array, 5, NORMAL);
	printf("The average: %f\n", average);

	average = avg(array, 5, SQUARED);
	printf("The squared average: %f\n", average);

	return 0;
}