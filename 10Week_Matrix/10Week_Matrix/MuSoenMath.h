#pragma once
#include <iostream>

#define PI 3.14
class mat3 
{
public:
	float num[3][3] = {}; 

	mat3() 
	{

	}

	mat3(float _0 , float _1, float _2,
		float _3, float _4, float _5,
		float _6, float _7, float _8)
	{
		num[0][0] = _0;num[0][1] = _1;
		num[0][2] = _2;
		num[1][0] = _3;
		num[1][1] = _4;
		num[1][2] = _5;
		num[2][0] = _6;
		num[2][1] = _7;
		num[2][2] = _8;
	}

	mat3 Transpose() 
	{
		mat3 Value;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				Value.num[i][j] = num[j][i];
			}
		}

		return Value;
	}
};

class vec3 
{
	public:
	float x, y, z;

	vec3() 
	{
	}
	vec3(float x, float y, float z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

const vec3 operator * (const vec3& vec, const mat3& temp) 
{
	vec3 Value;
	mat3 mat = temp;
	mat = mat.Transpose(); 

	Value.x = mat.num[0][0] * vec.x + mat.num[0][1] * vec.y + mat.num[0][2] * vec.z;
	Value.y = mat.num[1][0] * vec.x + mat.num[1][1] * vec.y + mat.num[1][2] * vec.z;
	Value.z = mat.num[2][0] * vec.x + mat.num[2][1] * vec.y + mat.num[2][2] * vec.z;

	return Value;
}

const mat3 operator * (const mat3& mat, const mat3& temp) 
{
	mat3 Value;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				Value.num[i][j] += mat.num[i][k] * temp.num[k][j];
			}
		}
	}

	return Value;
}