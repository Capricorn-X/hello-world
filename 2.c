#define _CRT_SECURE_NO_WARNINGS 1
//2.��֪����İ뾶��������������
#include<stdio.h>
#define PI 3.1415926

int main(void)
{
	float r;
	double v;
	scanf("%f", &r);
	v = 4 * PI * r * r*r/3;
	printf("v=%lf\n", v);
	return 0;
}
