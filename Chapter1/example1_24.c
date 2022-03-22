// ���� example1_24.c
// ����� "Extreme C" Amini K. ����� 1. ��������� �� ���������
// ��� ������ ��������� ���� ������ ����� ��������� �� ���� � ��� �� ���� ������

#include <stdio.h>

typedef struct {
	int x;
	int y;
} point_t;

typedef struct {
	point_t center;
	int radius;
} circle_t;

int main(int argc, char** argv) {
	circle_t c;
	
	circle_t* circle_ptr = &c;
	point_t* point_ptr = (point_t*)&c;
	int* int_ptr = (int*)&c;
	
	printf("Circle pointer: %p\n", (void*)circle_ptr);
	printf("Point pointer: %p\n", (void*)point_ptr);
	printf("Integer pointer: %p\n", (void*)int_ptr);

	return 0;
}