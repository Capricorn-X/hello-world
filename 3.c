#define _CRT_SECURE_NO_WARNINGS 1
//3.编程实现求从键盘输入一个整数的阶乘
#include<stdio.h>

int main()
{
	int i,n;
	long s=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	s = s*i;
	printf("%d!=%d\n",n,s);
	return 0;
}