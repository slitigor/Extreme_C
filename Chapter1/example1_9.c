// ���� example1_5.c 
// ����� "Extreme C" Amini K. ����� 1. ���������
// ������ ���������� � ������������� ����������

#include <stdio.h>

int main(int argc, char** argv) {
	int var = 100;
	int* ptr = 0;
	printf("Volume 'var' = %d\n", var);
	ptr = &var;
	*ptr = 200;
	printf("Volume 'var' = %d\n", var);

	return 0;
}