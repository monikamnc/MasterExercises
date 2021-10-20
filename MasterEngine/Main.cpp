#include <stdio.h>
#include "Vector3.h"
int main() {
	Vector3 v(3.0, 0.0, 0.0);
	Vector3 v2(5.0, 5.0, 0.0);

	printf("El vector es: x %lf y %lf z %lf \n", v.x, v.y, v.z);

	printf("El angulo entre los dos vectores es de %lf grados \n", v.angle_between(v2));

	v.Normalize();

	printf("El vector normalizado es: x %lf y %lf z %lf \n", v.x, v.y, v.z);


}
