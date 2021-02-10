#include "vector3.h"

// constructor
vector3::vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

// constructor with values
vector3::vector3(float x1, float y1, float z1)
{
	x = x1;
	y = y1;
	z = z1;
}

// copy vector constructor
vector3::vector3(const vector3& vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

vector3 vector3::operator+(const vector3& vec)
{
	// Returns a new vector summing the values for each component 
	// with the corresponding component in the added vector
	return vector3(x + vec.x, y + vec.y, z + vec.z);
}

vector3 &vector3::operator+=(const vector3& vec)
{
	// Returns 'this' pointer, i.e. self-reference summing the values
	// for each component with the corresponding component in the added vector
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return *this;
}

vector3 vector3::operator-(const vector3& vec)
{
	// Similar to addition
	return vector3(x - vec.x, y - vec.y, z - vec.z);
}

vector3& vector3::operator-=(const vector3& vec)
{
	// Similar to addition
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
}

// Scalar multiplication
vector3 vector3::operator*(float value)
{
	// Similar to subtraction
	return vector3(x * value, y * value, z * value);
}

vector3& vector3::operator*=(float value)
{
	// Similar to subtraction
	x *= value;
	y *= value;
	z *= value;
}

// Scalar division
vector3 vector3::operator/(float value)
{
	assert(value != 0); // prevent divide by 0
	// Similar to multiplication
	return vector3(x / value, y / value, z / value);
}

vector3 &vector3::operator/=(float value)
{
	assert(value != 0);
	x /= value;
	y /= value;
	z /= value;
}

vector3& vector3::operator=(const vector3& vec)
{
	// Similar to addition
	return vector3(x = vec.x, y = vec.y, z = vec.z);
}


// Dot product
float vector3::dot_product(const vector3 &vec)
{
	// returns (x1*x2 + y1*y2 + z1*z2) where these are 
	// the terms from each vector
	return (x * vec.x + y * vec.y + z * vec.z);
}

// Cross product
vector3 vector3::cross_product(const vector3& vec)
{
	float ni = y * vec.z - z * vec.y;
	float nj = x * vec.z - z * vec.x;
	float nk = x * vec.y - y * vec.x;

	return vector3(ni, nj, nk);
}

float vector3::magnitude()
{
	// returns square root of sum of the squared components
	return sqrt(square());
}

float vector3::square()
{
	return (x * x) + (y * y) + (z * z);
}

vector3 vector3::normalization()
{
	return vector3(x / magnitude(), y / magnitude(), z / magnitude());
}

float vector3::distance(const vector3& vec)
{
	return sqrt(((x - vec.x) * (x - vec.x)) + ((y - vec.y) * (y - vec.y)) + ((z - vec.z) * (z - vec.z)));
}

float vector3::show_X()
{
	return x;
}

float vector3::show_Y()
{
	return y;
}

float vector3::show_Z()
{
	return z;
}

void vector3::disp()
{
	cout << x << " " << y << " " << z << endl;
}