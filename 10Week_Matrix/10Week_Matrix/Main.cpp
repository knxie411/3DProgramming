#include "MuSoenMath.h"

using namespace std;

void main()
{
	vec3 v = vec3(0, 0, 1);

	float angle = 30 * PI / 180;

	mat3 Translate =mat3
	       (1, 0, 0, 
	     	0, 1, 0,
		    3, 5, 1);


	mat3 Rotate = mat3
			(cos(angle), -sin(angle), 0,
		     sin(angle), cos(angle), 0,
		     0, 0, 1);

	mat3 Scale = mat3
			(2, 0, 0,	
	         0, 2, 0,
		     0, 0, 1);

	vec3 P = v * Translate * Rotate * Scale;  
	
	cout << "P = v x Translate x Rotate x Scale;" << endl;
	cout << "X = " << P.x <<"\n" << "Y = " << P.y << "\n" << "Z = " << P.z << endl; 
}