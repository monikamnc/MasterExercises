#include "Vector3.h"
#include <math.h> 

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3::Vector3(double x_, double y_, double z_)
{
	x = x_;
	y = y_;
	z = z_;
}

Vector3::~Vector3()
{

}

void Vector3::Normalize()
{
	double length;
	length = sqrt((x * x) + (y * y) + (z * z));
	x = x / length;
	y = y / length;
	z = z / length;
}