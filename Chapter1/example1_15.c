// ���� example1_15.c
// ����� "Extreme C" Amini K. ����� 1. ���������
// ������� �������������� ������ �����������

#include <stdio.h>

int* create_an_integer(int default_value) {
	int var = default_value;
	return &var;
}

int main(int argc, char** argv) {
	int* int_ptr = NULL;
	int_ptr = create_an_integer(10);
	printf("%d\n",*int_ptr);

	return 0;
}