#define _CRT_SECURE_NO_WARNINGS 1
//1.���ʵ����һ��ͬѧ3�ſε�ƽ���ɼ�
#include<stdio.h>

int main()
{
	int a, b, c;
	float average;
	scanf("%d%d%d", &a, &b, &c);
	average = (a + b + c) / 3;
	printf("��ͬѧ3�ſε�ƽ���ɼ�Ϊ��%f\n", average);
	return 0;
}