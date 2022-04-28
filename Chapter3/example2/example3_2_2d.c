// Файл example3_2_2d.c
// Файл с определениями двумерных функций
#include <math.h>

// Подключить заголовочный файл, т.к. хотим исползовать
// типы polar_pos_2d_t и cartesian_pos_2d_t, а также
// тригонометрические функции, реализованные в другом исходнике
#include "example3_2_geometry.h"

cartesian_pos_2d_t convert_to_2d_cartesian_pos(const polar_pos_2d_t* polar_pos) {
	cartesian_pos_2d_t result;
	result.x = polar_pos->length * cos_deg(polar_pos->theta);
	result.y = polar_pos->length * sin_deg(polar_pos->theta);
	return result;
}

polar_pos_2d_t convert_to_2d_polar_pos(const cartesian_pos_2d_t* cartesian_pos) {
	polar_pos_2d_t result;
	result.length = sqrt(cartesian_pos->x * cartesian_pos->x +
						 cartesian_pos->y * cartesian_pos->y);
	result.theta = to_degree(atan(cartesian_pos->y / cartesian_pos->x));
	return result;
}