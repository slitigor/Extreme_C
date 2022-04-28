// Файл example4_6.c
// используем для исследования схемы динамической памяти

#include <unistd.h>	// Needed for sleep function (Unix)
// #include <windows.h> // Needed for sleep function (Windows)

int main(int argc, char** argv) {
	// Бесконечный цикл
	while(1) {
		sleep(1);	// Засыпаем на секунду
	};

	return 0;
}