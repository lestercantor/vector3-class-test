#include "vector3.h"
#include <iostream>

using namespace std;

int main()
{
	vector3 v1 = vector3(9.0f, 2.0f, 7.0f);
	vector3 v2 = vector3(4.0f, 8.0f, 10.0f);

	vector3 v3 = v1 + v2; // adds them using overloaded operator
	cout << "v1 + v2 = ";
	v3.disp(); // prints the new values

	float v4 = v1.distance(v2);

	cout << "the distance between v1 and v2 is: " << v4 << endl;

	vector3 cross = v1.cross_product(v2); // applies the cross product on the first vector with the second
	cout << "cross product for v1 and v2 is: ";
	cross.disp();

	float dot = v1.dot_product(v2); // applies the dot product on the first vector with the second

	cout << "the dot product for v1 and v2 is: " << dot << endl;

	float mag = v1.magnitude();
	cout << "the magnitude for v1 is: " <<  mag << endl;
	
	vector3 norm = v1.normalization();
	cout << "normalizing v1 is: ";
	norm.disp();
}