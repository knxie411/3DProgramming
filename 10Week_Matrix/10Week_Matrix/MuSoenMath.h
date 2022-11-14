#pragma once
#include <iostream>

#define PI 3.14
/* ȸ���� �� �� ���� ���� ����  */

class mat4
{
	public:
	float num[4][4] = {};
	/* 4x4 ����� �ʱ�ȭ */
	mat4()
	{
	}
	/* mat4 Ŭ������ �⺻ ������ */
	mat4(float _0, float _1, float _2, float _3,
		 float _4, float _5, float _6, float _7,
		 float _8, float _9, float _10, float _11,
		 float _12, float _13, float _14, float _15)
	{
		num[0][0] = _0;
		num[0][1] = _1;
		num[0][2] = _2;
		num[0][3] = _3;

		num[1][0] = _4;
		num[1][1] = _5;
		num[1][2] = _6;
		num[1][3] = _7;

		num[2][0] = _8;
		num[2][1] = _9;
		num[2][2] = _10;
		num[2][3] = _11;

		num[3][0] = _12;
		num[3][1] = _13;
		num[3][2] = _14;
		num[3][3] = _15;
	}/* 4x4 ��Ŀ� ���� �־��� */

	mat4 Identity()
	{
		return mat4(1, 0, 0, 0,
					0, 1, 0, 0,
					0, 0, 1, 0,
					0, 0, 0, 1);

	}/* ������ķ� �ʱ�ȭ */

	mat4 Transpose()
	{
		mat4 Value;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				Value.num[i][j] = num[j][i];
			}
		}

		return Value;
	}/* ��ġ��ķ� ��ȯ */
};
/* 4x4 ��� */

class mat3 
{
public:
	float num[3][3] = {}; 
	/* 3x3 ����� �ʱ�ȭ */

	mat3() 
	{
	}/* mat3 Ŭ������ �⺻ ������ */

	mat3(float _0 , float _1, float _2,
		float _3, float _4, float _5,
		float _6, float _7, float _8)
	{
		num[0][0] = _0;
		num[0][1] = _1;
		num[0][2] = _2;

		num[1][0] = _3;
		num[1][1] = _4;
		num[1][2] = _5;

		num[2][0] = _6;
		num[2][1] = _7;
		num[2][2] = _8;
	}/* 3x3 ��Ŀ� ���� �־��� */

	mat3 Identity()
	{
		return mat3(1, 0, 0,
					0, 1, 0,
					0, 0, 1);
	}
	/* ������ķ� �ʱ�ȭ */

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
	}/* ��ġ��ķ� ��ȯ */
};
/* 3x3 ��� */

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
/* ����3 Ŭ���� */

class vec1_3
{
public:
	float vec[3][1];

	vec1_3()
	{
	}
	vec1_3(float x, float y, float z)
	{
		vec[0][0] = x;
		vec[0][1] = y;
		vec[0][2] = z;
	}
};
/* 1x3 ���� Ŭ���� */

class vec4
{
public:
	float w, x, y, z;

	vec4()
	{
	}
	vec4(float w, float x, float y, float z)
	{
		this->w = w;
		this->x = x;
		this->y = y;
		this->z = z;
	}
};
/* ����4 Ŭ���� */

class vec1_4
{
public:
	float vec[4][1];

	vec1_4()
	{
	}
	vec1_4(float w, float x, float y, float z)
	{
		vec[0][0] = w;
		vec[0][1] = x;
		vec[0][2] = y;
		vec[0][3] = z;
	}
}
;/* 1x4 ���� Ŭ���� */


const vec3 operator + (const vec3& vec, const vec3& temp)
{
	vec3 Value;
	
	Value.x = vec.x +  temp.x ;
	Value.y = vec.y +  temp.y ;
	Value.z = vec.z +  temp.z ;

	return Value;
}
/* ����3�� �� */

const vec3 operator - (const vec3& vec, const vec3& temp)
{
	vec3 Value;

	Value.x = vec.x - temp.x;
	Value.y = vec.y - temp.y;
	Value.z = vec.z - temp.z;

	return Value;
}
/* ����3�� �� */

const vec4 operator + (const vec4& vec, const vec4& temp)
{
	vec4 Value;

	Value.w = vec.w + temp.w;
	Value.x = vec.x + temp.x;
	Value.y = vec.y + temp.y;
	Value.z = vec.z + temp.z;

	return Value;
}
/* ����4�� �� */

const vec4 operator - (const vec4& vec, const vec4& temp)
{
	vec4 Value;

	Value.w = vec.w - temp.w;
	Value.x = vec.x - temp.x;
	Value.y = vec.y - temp.y;
	Value.z = vec.z - temp.z;

	return Value;
}
/* ����4�� �� */


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
/* ����3�� 3x3����� �� */

const vec3 operator * (const vec3& vec, const int& temp)
{
	vec3 Value;

	Value.x = vec.x * temp;
	Value.y = vec.y * temp;
	Value.z = vec.z * temp;

	return Value;
}
/* ����3�� ����� */

const vec3 operator / (const vec3& vec, const int& temp)
{
	vec3 Value;

	Value.x = vec.x / temp;
	Value.y = vec.y / temp;
	Value.z = vec.z / temp;

	return Value;
}
/* ����3�� ������� */

const vec4 operator * (const vec4& vec, const mat4& temp)
{
	vec4 Value;
	mat4 mat = temp;
	mat = mat.Transpose();

	Value.w = mat.num[0][0] * vec.w + mat.num[0][1] * vec.x + mat.num[0][2] * vec.y + mat.num[0][3] * vec.z;
	Value.x = mat.num[1][0] * vec.w + mat.num[1][1] * vec.x + mat.num[1][2] * vec.y + mat.num[1][3] * vec.z;
	Value.y = mat.num[2][0] * vec.w + mat.num[2][1] * vec.x + mat.num[2][2] * vec.y + mat.num[2][3] * vec.z;
	Value.z = mat.num[3][0] * vec.w + mat.num[3][1] * vec.x + mat.num[3][2] * vec.y + mat.num[3][3] * vec.z;

	return Value;
}
/* ����4�� 4x4��� �� �� */

const vec4 operator * (const vec4& vec, const int& temp)
{
	vec4 Value;

	Value.w = vec.w * temp;
	Value.x = vec.x * temp;
	Value.y = vec.y * temp;
	Value.z = vec.z * temp;

	return Value;
}
/* ����4�� ����� */

const vec4 operator / (const vec4& vec, const int& temp)
{
	vec4 Value;

	Value.w = vec.w / temp;
	Value.x = vec.x / temp;
	Value.y = vec.y / temp;
	Value.z = vec.z / temp;

	return Value;
}
/* ����4�� ������� */

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
/* 3x3��İ�  3x3����� �� */

const mat3 operator + (const mat3& mat, const mat3& temp)
{
	mat3 Value;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				Value.num[i][j] += mat.num[i][k] + temp.num[k][j];
			}
		}
	}

	return Value;
}
/* 3x3��İ�  3x3����� �� */

const mat3 operator - (const mat3& mat, const mat3& temp)
{
	mat3 Value;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				Value.num[i][j] += mat.num[i][k] - temp.num[k][j];
			}
		}
	}

	return Value;
}
/* 3x3��İ�  3x3����� �� */

const mat4 operator * (const mat4& mat, const mat4& temp)
{
	mat4 Value;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				Value.num[i][j] += mat.num[i][k] * temp.num[k][j];
			}
		}
	}

	return Value;
}
/* 4x4��İ�  4x4����� �� */

const mat4 operator + (const mat4& mat, const mat4& temp)
{
	mat4 Value;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				Value.num[i][j] += mat.num[i][k] + temp.num[k][j];
			}
		}
	}

	return Value;
}
/* 4x4��İ�  4x4����� �� */

const mat4 operator - (const mat4& mat, const mat4& temp)
{
	mat4 Value;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				Value.num[i][j] += mat.num[i][k] - temp.num[k][j];
			}
		}
	}

	return Value;
}
/* 4x4��İ�  4x4����� �� */
