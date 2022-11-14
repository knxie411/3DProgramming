#include "MuSoenMath.h"
#include <iostream>

using namespace std;


int main()
{

	float a = 3;
	vec3 v3_1 = vec3(1, 3, 5);
	vec3 v3_2 = vec3(2, 4, 6);

	vec3 vR_1 = v3_1 + v3_2;
	vec3 vR_2 = v3_2 - v3_1;

	vec4 v4_1 = vec4(1, 3, 5, 7);
	vec4 v4_2 = vec4(2, 4, 6, 8);

	vec4 vR_3 = v4_1 + v4_2;
	vec4 vR_4 = v4_2 - v4_1;

	mat3 m3_1 = mat3(1, 12, 15,
					44, 99, 77,
					66, 88, 55);

	mat3 m3_2 = mat3(3, 2, 7,
					23, 14, 8,
					47, 43, 23);

	vec3 vR_1_1 = v3_1 * m3_1;
	vec3 vR_2_2 = v3_1 * a;
	vec3 vR_2_3 = v3_1 / a;


	mat4 m4_1 = mat4(100, 200, 300, 400,
		500, 600, 700, 800,
		900, 1000, 1100, 1200,
		1300, 1400, 1500, 1600);

	mat4 m4_2 = mat4(2, 5, 3, 1,
		6, 4, 3, 7,
		11, 1, 12, 9,
		22, 42, 5, 8);


	vec1_3 v_1 = vec1_3(10, 20, 30);
	vec1_4 v_2 = vec1_4(1000, 2000, 3000, 4000);


	vec4 vR_3_1 = v4_1 * m4_1;
	vec4 vR_3_2 = v4_1 * a;
	vec4 vR_3_3 = v4_1 / a;

	mat3 m3_3_1 = m3_1 * m3_2;
	mat3 m3_3_2 = m3_1 + m3_2;
	mat3 m3_3_3 = m3_1 - m3_2;

	mat4 m4_1_1 = m4_1 * m4_2;
	mat4 m4_1_2 = m4_1 + m4_2;
	mat4 m4_1_3 = m4_1 - m4_2;


	cout << "Vec3 ÀÇ ÇÕ" << endl;
	cout << "Vec3_1 + Vec3_2 = " << vR_1.x << ", " << vR_1.y << ", " << vR_1.z << endl;
	cout << endl;

	cout << "Vec3 ÀÇ Â÷" << endl;
	cout << "Vec3_2 - Vec3_1 = " << vR_2.x << ", " << vR_2.y << ", " << vR_2.z << endl;
	cout << endl;

	cout << "Vec4 ÀÇ ÇÕ" << endl;
	cout << "Vec4_1 + Vec4_2 = " << vR_1.x << ", " << vR_1.y << ", " << vR_1.z << endl;
	cout << endl;

	cout << "Vec4 ÀÇ Â÷" << endl;
	cout << "Vec4_ + Vec4_1 = " << vR_2.x << ", " << vR_2.y << ", " << vR_2.z << endl;
	cout << endl;

	cout << "Vec3 ¿Í Met3 ÀÇ °ö" << endl;
	cout << "X = " << vR_1_1.x << ", " << "Y = " << vR_1_1.y << ", " << "Z = " << vR_1_1.z << endl;
	cout << endl;

	cout << "Vec3 ¿Í »ó¼ö °ö" << endl;
	cout << "X = " << vR_2_2.x << ", " << "Y = " << vR_2_2.y << ", " << "Z = " << vR_2_2.z << endl;
	cout << endl;

	cout << "Vec3 ¿Í »ó¼ö ³ª´®" << endl;
	cout << "X = " << vR_2_3.x << ", " << "Y = " << vR_2_3.y << ", " << "Z = " << vR_2_3.z << endl;
	cout << endl;

	cout << "Vec4 ¿Í Met4 ÀÇ °ö" << endl;
	cout << "W = " << vR_3_1.w << ", X = " << vR_3_1.x << " " << ", Y = " << vR_3_1.y << ", " << "Z = " << vR_3_1.z << endl;
	cout << endl;

	cout << "Vec3 ¿Í »ó¼ö °ö" << endl;
	cout << "W = " << vR_3_2.w << ", X = " << vR_3_2.x << " " << ", Y = " << vR_3_2.y << ", " << "Z = " << vR_3_2.z << endl;
	cout << endl;

	cout << "Vec3 ¿Í »ó¼ö ³ª´®" << endl;
	cout << "W = " << vR_3_3.w << ", X = " << vR_3_3.x << " " << ", Y = " << vR_3_3.y << ", " << "Z = " << vR_3_3.z << endl;
	cout << endl;

	cout << "Met3 ³¢¸® ÀÇ °ö" << endl;
	cout << " [ m3_1 x m3_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m3_3_1.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Met3 ³¢¸® ÀÇ ÇÕ" << endl;
	cout << " [ m3_1 + m3_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m3_3_2.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Met3 ³¢¸® ÀÇ Â÷" << endl;
	cout << " [ m3_1 - m3_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m3_3_3.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Met4 ³¢¸® ÀÇ °ö" << endl;
	cout << " [ m4_1 x m4_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m4_1_1.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Met4 ³¢¸® ÀÇ ÇÕ" << endl;
	cout << " [ m4_1 + m4_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m4_1_2.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Met4 ³¢¸® ÀÇ Â÷" << endl;
	cout << " [ m4_1 - m4_2 ] " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m4_1_3.num[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
}