// ���� example1_13.c
// ����� "Extreme C" Amini K. ����� 1. ���������
// ������������� ����������� ��������� �������� ������ ����������

#include <stdio.h>

int main(int argc, char** argv) {
	int var = 9;
	int* int_ptr = &var;
	void* gptr = int_ptr;
	printf("%d\n", *gptr);

	return 0;
}