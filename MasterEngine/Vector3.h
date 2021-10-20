#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(double x_, double y_, double z_);
	~Vector3();

	double x;
	double y;
	double z;

	void Normalize();
	double angle_between(Vector3 v_);

};

