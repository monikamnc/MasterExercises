#include <stdio.h>
#include "Vector3.h"
#include "String.h"
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



    // Constructor with no arguments
    String a;

    // Convert string literal to
    // char array
    char temp[] = "Hello";

    // Constructor with one argument
    String b{ temp };

    // Copy constructor
    String c{ a };

    char temp1[] = "World";

    // One arg constructor called,
    // then the move constructor
    String d{ String{ temp } };

    // Remove last character from
    // Mystring b
    b.pop_bk();

    // Print string b
    printf("Mystring b: %s \n", b);

    // Append last character from
    // Mystring b
    b.push_bk('o');

    // Print string b
    printf("Mystring b: %s \n", b);

    // Print length of string b
    printf("Lenght b: %s \n", b);

    char arr[80];

    // Copy string b chars from
    // length 0 to 3
    b.cpy(arr, 3, 0);

    // Print string arr
    printf("Arr b: %s \n", b);

    // Swap d and b
    d.swp(b);

    // Print d and b
    printf("Mystring d y b: %s %s \n", d, b);

    // Concatenate b and b with
    // overloading '+' operator
    d = b + b;

    // Print string d
    printf("Mystring d: %s \n", d);

    return 0;


}
