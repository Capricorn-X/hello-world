#define _CRT_SECURE_NO_WARNINGS 1
//1.编程实现求一名同学3门课的平均成绩
#include<stdio.h>

int main()
{
	int a, b, c;
	float average;
	scanf("%d%d%d", &a, &b, &c);
	average = (a + b + c) / 3;
	printf("该同学3门课的平均成绩为：%f\n", average);
	return 0;
}