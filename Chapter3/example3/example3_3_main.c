// Файл example3_3_main.c
// Использует статическую библиотеку созданную в предыдущем уроке:
// ../example2/opt/geometry/libgeometry.a

#include <stdio.h>
#include "../example2/example3_2_geometry.h"

int main(int argc, char** argv) {
	cartesian_pos_2d_t cartesian_pos;
	cartesian_pos.x = 100;
	cartesian_pos.y = 200;
	polar_pos_2d_t polar_pos = polar_pos = convert_to_2d_polar_pos(&cartesian_pos);
	printf("Polar position: Length - %f; Theta - %f (deg)\n",
			polar_pos.length, polar_pos.theta);

	return 0;
}