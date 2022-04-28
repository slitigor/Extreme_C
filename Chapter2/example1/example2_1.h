#ifndef _EXAMPLE2_1_H
#define _EXAMPLE2_1_H

typedef enum {
	NONE,
	NORMAL,
	SQUARED
} average_type_t;

// Объявление функции 
double avg(int*, int, average_type_t);

#endif	//_EXAMPLE2_1_H