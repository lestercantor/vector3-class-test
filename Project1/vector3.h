#pragma once

#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

class vector3
{
	float x, y, z;

	// Constructors
	vector3(); // constructor
	vector3(float x1, float y1, float z1 = 0); //contructor with values
	vector3(const vector3& vec);
	
	// Arithmetic Operators - note use of overloading
	vector3 operator+(const vector3& vec); // addition
	vector3& operator+=(const vector3& vec); //assign new result to vector

	vector3 operator-(const vector3& vec); //subtraction
	vector3& operator-=(const vector3& vec); // assign new result to vector

	vector3 operator*(float value); // multiplication
	vector3& operator*=(float value); // assign new result to vector

	vector3 operator/(float value); // division
	vector3& operator/=(float value); // assign new result to vector

	vector3& operator=(const vector3& vec);

	// Vector operations
	float dot_product(const vector3& vec); // scalar dot product
	vector3 cross_product(const vector3& vec); //cross product
	vector3 normalization(); //normalized vector

	// Scalar operations
	float square(); // gives square of the vector
	float distance(const vector3& vec); // distance between two vectors
	float magnitude(); // magnitude of the vector

	// Show operations
	float show_X(); // return x
	float show_Y(); // return y
	float show_Z(); // return z
	void disp(); // display value of vectors
};

