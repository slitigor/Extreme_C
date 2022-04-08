// Заголовочный файл example3_2_geometry.h
// объявляет функции преобразования радианных величин в градусы,
// тригонометрические функции и функции преобразования координат
// из декартовой системы координат в полярную и обратно
#ifndef EXAMPLE3_2_GEOMETRY_H
#define EXAMPLE3_2_GEOMETRY_H

#define PI 3.14159265359

typedef struct {
	double x;
	double y;
} cartesian_pos_2d_t;

typedef struct {
	double length;
	double theta;	// В градусах
} polar_pos_2d_t;

typedef struct {
	double x; 
	double y;
	double z;
} cartesian_pos_3d_t;

typedef struct {
	double length;
	double theta;	// в градусах
	double phi;		// в градусах
} polar_pos_3d_t;

double to_radian(double deg);
double to_degree(double rad);

double cos_deg(double deg);
double acos_deg(double deg);

double sin_deg(double deg);
double asin_deg(double deg);

cartesian_pos_2d_t convert_to_2d_cartesian_pos(const polar_pos_2d_t* polar_pos);
polar_pos_2d_t convert_to_2d_polar_pos(const cartesian_pos_2d_t* cartesian_pos);

cartesian_pos_3d_t convert_to_3d_cartesian_pos(const polar_pos_3d_t* polar_pos);
polar_pos_3d_t convert_to_3d_polar_pos(const cartesian_pos_3d_t* cartesian_pos);

#endif // EXAMPLE3_2_GEOMETRY_H