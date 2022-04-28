// ‘айл example1_10.c 
//  нига "Extreme C" Amini K. „асть 1. ”казатели
// ƒлина арифметического шага дл€ двух указателей

#include <stdio.h>

int main(int argc, char** argv) {
	int var = 1;
	int* int_ptr = NULL;	// ќбъ€вили и обнулили (об€зательно!) указатель
	int_ptr = &var;
	
	char* char_ptr = NULL;
	char_ptr = (char*)&var;
	
	printf("Before arithmetic: int_ptr: %u; char_ptr: %u\n", 
			(unsigned int)int_ptr, (unsigned int)char_ptr);
	int_ptr++;
	char_ptr++;
	printf("After arithmetic: int_ptr: %u; char_ptr: %u\n", 
			(unsigned int)int_ptr, (unsigned int)char_ptr);
	

	return 0;
}