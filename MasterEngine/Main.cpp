#include <stdio.h>
#include "Vector3.h"
int main() {
	Vector3 v(1.0, 2.0, 3.0);
	Vector3 v2(4.0, 5.0, 6.0);

	printf("El vector es: x %lf y %lf z %lf \n", v.x, v.y, v.z);

	printf("El angulo entre los dos vectores es de %lf grados \n", v.angle_between(v2));

	printf("El producto escalar entre los dos vectores es %lf \n", v.dot_product(v2));

	Vector3 result = v.cross_product(v2);
	printf("El producto vectorial entre los dos vectores es ( %lf, %lf, %lf )\n", result.x , result.y, result.z);

	v.Normalize();

	printf("El vector normalizado es: x %lf y %lf z %lf \n", v.x, v.y, v.z);


}
