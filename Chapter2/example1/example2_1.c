// ���� example2_1.c
// ����� "Extreme C" Amini K. ����� 2. ���������� � ����������. 
// ������� ����������.
// �������� ���� � ������������ ������� avg

#include "example2_1.h"

double avg(int* array, int length, average_type_t type) {
	if (length <= 0 || type == NONE) return 0;
	
	double sum = 0.0;
	for (int i = 0; i < length; i++) {
		if (type == NORMAL)
			sum += array[i];
		else if (type == SQUARED)
			sum += array[i] * array[i];
	}
	return sum / length;
}