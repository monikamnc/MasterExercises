#include "Vector3.h"
#include <math.h> 

#define PI 3.14159265

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

double Vector3::angle_between(Vector3 v_)
{
	double lengthV1;
	lengthV1 = sqrt((x * x) + (y * y) + (z * z));
	double lengthV2;
	lengthV2 = sqrt((v_.x * v_.x) + (v_.y * v_.y) + (v_.z * v_.z));

	double product;
	product = (x * v_.x) + (y * v_.y) + (z * v_.z);

	return acos(product / (lengthV1 * lengthV2)) * 180.0 / PI;
}