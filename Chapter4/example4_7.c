// file example4_7.c
// Для исследования кучи
#include <unistd.h> // для функции sleep 
#include <stdlib.h> // для функции malloc
#include <stdio.h>  // для функции printf

int main(int argc, char** argv) {
	void* ptr = malloc(1024); // выделяем для кучи 1 Кбайт
	printf("Address: %p\n", ptr);
	fflush(stdout); // для принудительного вывода
	while(1) {
		sleep(1); // засыпаем на секунду
	};
	return 0;
}
