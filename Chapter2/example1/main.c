// ���� example2_1.c
// ����� "Extreme C" Amini K. ����� 2. ���������� � ����������. 
// ������� ����������.
// ������� ������� � ������� 2.1

#include <stdio.h>
#include "example2_1.h"

int main(int argc, char** argv) {
	// ���������� � ������������� �������
	int array[5] = {10, 3, 5, -8, 9};
	
	// ���������� �������� �������� � ������� ������� avg()
	double average = avg(array, 5, NORMAL);
	printf("The average: %f\n", average);

	average = avg(array, 5, SQUARED);
	printf("The squared average: %f\n", average);

	return 0;
}