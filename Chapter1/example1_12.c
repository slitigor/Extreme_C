// ���� example1_12.c 
// ����� "Extreme C" Amini K. ����� 1. ���������
// ������� ��������� ������� � ������� ���������� ����������

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