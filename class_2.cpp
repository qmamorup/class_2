#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

class Vector
{
public:
	double X;
	double Y;
	double Z;

	Vector()
	{
		this->X = 0;
		this->Y = 0;
		this->Z = 0;
	}

	Vector(double x, double y, double z)
	{
		this->X = x;
		this->Y = y;
		this->Z = z;
	}

	double GetLength() 
	{
		return sqrt(X * X + Y * Y + Z * Z);
	}

	void Print() 
	{
		cout << endl;
		cout << "X=" << X;
		cout << endl;
		cout << "Y=" << Y;
		cout << endl;
		cout << "Z=" << Z;
		cout << endl;
	}

	Vector operator +(Vector r) 
	{
		return Vector(this->X + r.X, this->Y + r.Y, this->Z + r.Z);
	}

	Vector operator -(Vector r) 
	{
		return Vector(this->X - r.X, this->Y - r.Y, this->Z - r.Z);
	}

	double operator *(Vector r) 
	{
		return (this->X * r.X + this->Y * r.Y + this->Z * r.Z);
	}
};

int main() 
{
	Vector Obj1(1, 2, 3);
	Vector Obj2(4, 5, 6);
	Vector Obj3;

	Obj3 = Obj1 + Obj2;
	Obj3.Print();

	Obj3 = Obj3 - Obj2;
	Obj3.Print();

	double mul;
	mul = Obj1 * Obj2;
	cout << endl;
	cout << mul;

	return 0;
}