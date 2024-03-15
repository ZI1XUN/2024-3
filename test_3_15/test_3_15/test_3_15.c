#define _CRT_SECURE_NO_WARNINGS
////eg9.7
//#include<stdio.h>
//struct Student
//{
//	long long int num;
//	char name[20];
//	float score[3];
//}stu[5];
//
//int main()
//{
//	float maxf(float* p,int n);
//	float aver(float* p, int n);
//	void print(float* p, float num,int n, struct Student *name);
//	int i;
//	float ave[5], max;
//	float* p = stu[i].score;
//
//	for (i = 0; i < 5; i++)
//		ave[i] = aver(p, 3);
//
//	max = maxf(ave,5);
//
//	print(ave, max,5, stu);
//	return 0;
//}
//
//void print(float* p, float num,int n, struct Student *name)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (*(p + i) == num)
//			printf("%lld %s %5.2f %5.2f %5.2f %5.2f", name[i].num, name[i].name, name[i].score[1], name[i].score[2], name[i].score[3], num);
//
//}
//
//float maxf(float* p, int n)
//{
//	int i,k;
//	float max = *p;
//	for (i = 0; i < n; i++)
//		max = (max > *(p + i) ? max : *(p + i));
//	return max;
//}
//
//float aver(float* p, int n)//一个人的aver
//{
//	int i;
//	float sum = *p;
//	for (i = 0; i < n; i++)
//		sum = sum + *(p + i);
//	return(sum / n);
//
//}

//#include<stdio.h>
//union Date
//{
//	int num;
//	char ch;
//	float f;
//}a;
//int main()
//{
//	//union Date a = { .ch="97" };
//	a.num = 97;
//	printf("%d\n", a.num);
//}
#include<stdio.h>
int main()
{
	double profit;
	double reward = 0;
	scanf("%lf", &reward);
	if (profit <= 10)
		reward = profit * 0.1;
	printf("%lf", reward);
	return 0;
}