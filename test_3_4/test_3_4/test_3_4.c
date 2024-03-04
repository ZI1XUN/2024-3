#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age_1, age_5;
	int jia(int x, int y);
	printf("请告知age_1是多少");
	scanf("%d", &age_1);
	age_5 = jia(age_1, 2);
	printf("age5 = %d\n", age_5);
	return 0;
}
int jia(int x, int y)
{
	int ret=x, i;
	for (i = 1; i < 5; i++)
	{
		ret = ret + y;
	}
	return ret;
}