#include <stdio.h>
#include "Vector3.h"
int main() {
	Vector3 v(3.0, 1.0, 2.0);

	printf("El vector es: x %lf y %lf z %lf \n", v.x, v.y, v.z);

	v.Normalize();

	printf("El vector normalizado es: x %lf y %lf z %lf \n", v.x, v.y, v.z);


}
