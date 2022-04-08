// ���� example3_2_trigon.c
// ����������� ������������������ �������

#include <math.h>

// ����� ���������� ������������ ����,
// �.�. �� ����� ������������ ������ PI
#include "example3_2_geometry.h"

double to_radian(double deg) {
	return (PI * deg) / 180;
}

double to_degree(double deg) {
	return (180 * deg) / PI;
}

double cos_deg(double deg) {
	return cos(to_radian(deg));
}

double acos_deg(double deg) {
	return acos(to_radian(deg));
}

double sin_deg(double deg) {
	return sin(to_radian(deg));
}

double asin_deg(double deg) {
	return asin(to_radian(deg));
}