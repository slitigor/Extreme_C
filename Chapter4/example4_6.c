// ���� example4_6.c
// ���������� ��� ������������ ����� ������������ ������

#include <unistd.h>	// Needed for sleep function (Unix)
// #include <windows.h> // Needed for sleep function (Windows)

int main(int argc, char** argv) {
	// ����������� ����
	while(1) {
		sleep(1);	// �������� �� �������
	};

	return 0;
}