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

	//Normalizar el Vector actual
	void Normalize();
	//Cálculo de la distancia entre dos Vectores
	double distance_to(Vector3 v_);
	//Cálculo del ángulo que hacen dos Vectores
	double angle_between(Vector3 v_);
	//Producto Vectorial de dos Vectores
	Vector3 cross_product(Vector3 v_);
	//Producto Escalar de dos Vectores
	double dot_product(Vector3 v_);
};

