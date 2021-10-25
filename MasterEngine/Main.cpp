#include <stdio.h>
#include "Vector3.h"
int main() {
	Vector3 v(1.0, 2.0, 3.0);
	Vector3 v2(4.0, 5.0, 6.0);

	printf("El primer vector es: x %.3lf y %.3lf z %.3lf \n", v.x, v.y, v.z);
	printf("El segundo vector es: x %.3lf y %.3lf z %.3lf \n", v2.x, v2.y, v2.z);

	Vector3 vT = v + v2;

	printf("La suma de los vectores es: x %.3lf y %.3lf z %.3lf \n", vT.x, vT.y, vT.z);

	printf("La distancia entre los dos vectores es de %.3lf \n", v.distance_to(v2));

	printf("El angulo entre los dos vectores es de %.3lf grados \n", v.angle_between(v2));

	printf("El producto escalar entre los dos vectores es %.3lf \n", v.dot_product(v2));

	Vector3 result = v.cross_product(v2);
	printf("El producto vectorial entre los dos vectores es ( %.3lf, %.3lf, %.3lf )\n", result.x , result.y, result.z);

	v.Normalize();

	printf("El vector normalizado es: x %.3lf y %.3lf z %.3lf \n", v.x, v.y, v.z);


}
