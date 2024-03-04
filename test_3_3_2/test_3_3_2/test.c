#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdio.h>
int main()
{
	int age(int n);
	printf("第五名同学年纪是%d\n", age(5));
	return 0;
}
int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return (c);
}