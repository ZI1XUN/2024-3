#define _CRT_SECURE_NO_WARNIN
#define _CRT_SECURE_NO_WARNINGS

//eg8.14
//#include<stdio.h>
//int main()
//{
//	//float average(float* arr[], int n);
//	//float plus(float arr[],int n);
//	float table[3][4] = { 0 };
//	int i;// j, n;
//	//float ave,sum;
//
//	printf("input 3 students' grade:");
//	for (i = 0; i < 12; i++)
//		scanf("%f ", (*table+i));
//
//	/*ave=average(table, 12);
//	printf("the average grade=%5.2f", ave);*/
//
//	/*printf("enter the student numer=\n");
//	scanf("%d\n", &n);
//	sum = plus(table, n);
//	printf("student%d grade sum=%5.2f", n, sum);*/
//	return 0;
//}
//float average(float* arr[], int n)
//{
//	float ave,sum=0;
//	int i;
//	for (i =0 ; i < n; i++)
//	{
//		sum = sum + (**arr + i);
//	}
//	ave = sum / n;
//	return ave;
//}
//float plus(float* arr, int n)
//{
//	float sum=0;
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		sum = sum + *(*arr+i)//*(arr + i);
//	}
//	return sum;
//}

////答案
//#include<stdio.h>
//int main()
//{
//	void average(float* p, int n);
//	void search(float(*p)[4], int n);
//	float score[3][4] = { {65,67,70,60},{80,87,90,81},{90,99,100,98} };
//	average(*score, 12);
//	search(score, 2);
//	return 0;
//}
//void average(float* p, int n)
//{
//	float* p_end;
//	float sum = 0, aver;
//	p_end = p + n - 1;
//	for (; p < p_end; p++)
//	{
//		sum = sum + (*p);
//	}
//	aver = sum / n;
//	printf("average=%5.2f\n", aver);
//}
//void search(float(*p)[4], int n)
//{
//	int i;
//	printf("the score of no.%d are:\n", n);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%5.2f ", *(*(p + n) + i));
//	}
//	printf("\n");
//}

//eg 8.15
//#include<stdio.h>
//int main()
//{
//	void fail(float(*p)[4]);
//	float score[3][4] = { {65,57,70,60},{58,87,90,81},{90,99,100,98} };
//	fail(score);
//	return 0;
//}
//void fail(float(*p)[4])
//{
//	int i, j,k;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (*(*(p + i) + j) < 60)
//			{
//				printf("No.%d student is failed\n his/her grades are:\n", i);
//				for (k = 0; k < 4; k++)
//					printf("%5.2f ", *(*(p + i) + k));
//				printf("\n");
//			}
//		}
//	}
//}

////eg8.18
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	char a[] = "I am a student!";
//	char b[20];
//	strncpy(b, a);
//	printf("%s\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[] = "I am a student!", b[20];
//	int i;
//	for (i = 0; *(a + i) != '\0'; i++)
//		*(b + i) = *(a + i);
//	*(b + i) = '\0';
//	printf("string a is:%s\n", a);
//	printf("string a is:");
//	for (i = 0; *(b + i) != '\0'; i++)
//		printf("%c", *(b + i));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//    int a;
//    char dest[50] = { 0 };
//    char d[50] = { 0 };
//    char src[50] = { "http://c.biancheng.net" };
//    //strcpy(dest, src);
//   strncpy(d, src,10 );
//    a=strcmp(dest, d);
//    d[11] = '\0';
//    puts(dest);
//    puts(d);
//    printf("%d", a);
//    return 0;
//}

//eg 8.19
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "YESTODAY IS ONE DAY BEFORE TODAY", b[33] = {0};
//	char* pa, * pb;
//	pa = a; pb = b;
//	int i;
//	for (i = 0; *(a + i) != '\0'; i++)
//		*(b + i) = *(a + i);
//	*(b + i) = '\0';
//	i = strlen(a);          //strlen 得到的是 size_z 不是int 虽然值是一样的
//	printf("%d\n",i);
//	printf("%s", b);
//	return 0;
//}

////8.22
//#include<stdio.h>
//int main()
//{
//	void max(int a, int b);
//	int n = 1, m = 2;
//	//void(*p)(int, int) = &max; 
//	void(*p)(int, int) = max;   //函数名——函数入口地址
//	//p;                        //p本质上保存的是地址； *p 指向函数 max  ;(*p)(n,m) 等价于 max(n,m)
//	(*p)(n, m);
//	return 0;
//}
//void max(int a, int b)
//{
//	int max;
//	max = (a > b ? a : b);
//	printf("max is %d", max);
//}

//#include<stdio.h>
//int main()
//{
//	void max(int m, int n);
//	void min(int m, int n);
//	int a = 10, b = 33, num;
//	void(*p)(int, int);
//	printf("Choose a number between 1 and 2\n");
//	scanf("%d", &num);
//	if (num == 1)
//		p = max;
//	else
//		p = min;
//	(*p)(a, b);
//	return 0;
//}
//void max(int m, int n)
//{
//	int max;
//	max = (m > n ? m : n);
//	printf("max is %d", max);
//}
//void min(int m, int n)
//{
//	int min;
//	min = (m < n ? m : n);
//	printf("max is %d", min);
//}

////eg8.24
//#include<stdio.h>
//int main()
//{
//	void max(int m, int n);
//	void min(int m, int n);
//	void sum(int m, int n);
//	void fun(void(*p)(int, int),void(*q)(int, int), void(*k)(int, int),int n);
//	int num;
//	//void(*p_max)(int, int) = max;      //这三行 指令 可有可无
//	//void(*p_min)(int, int) = min;
//	//void(*p_sum)(int, int) = sum;
//	printf("Choose a number from 1,2,3\n");
//	scanf("%d", &num);
//	fun(max, min, sum, num);            //  因为调用fun()函数时 实参是函数名
//	return 0;
//}
//void max(int m, int n)
//{
//	printf("max is %d", (m > n ? m : n));
//}
//void min(int m, int n)
//{
//	printf("min is %d", (m < n ? m : n));
//}
//void sum(int m, int n)
//{
//	printf("sum is %d", (m + n));
//}
//void fun(void(*p)(int, int), void(*q)(int, int), void(*k)(int, int), int n)
//{
//	int a = 33, b = 98;
//	if (n == 1) (*p)(a, b);
//	if (n == 2) (*q)(a, b);
//	if (n == 3) (*k)(a, b);
//}

////eg8.25 作业
//#include<stdio.h>
//int main()
//{
//	int* std(int arr[], int m);
//	int grade[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
//	int* p = grade;
//	int a,i;
//	printf("enter a number from 0,1,2 to choose a student\n");
//	scanf("%d", &a);
//	p=std(grade, a);
//	for (i = 0; i < 4; i++)
//		printf("%d ", *(*p + i));   //定义 声明 std 函数时 
////									第一项形参 类型是 
////											数组 
//		//printf("%d ", *(p + i));    //当实参 grade 传递给 std 函数时 不再是 grade==&grade[0]
//									//而是 grade==&grade[0]—>一维数组名 grade[0]
//	return 0;
//}
//int* std(int arr[], int m)
//{
//	int* ps = arr + m;   
//	return ps;
//}

//eg8.25 答案形式
//#include<stdio.h>
//int main()
//{
//	int* std(int (*p)[4], int m); //第一项形参 一维数组 的指针
//	int grade[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
//	int* p;
//	int a, i;
//	printf("enter a number from 0,1,2 to choose a student\n");
//	scanf("%d", &a);
//	p = std(grade, a);
//	for (i = 0; i < 4; i++)
//		printf("%d ", *(*p + i));   
//	return 0;
//}
//int* std(int(*p)[4], int m)
//{
//	int* ps = p + m;
//	return ps;
//}

#include<stdio.h>
int main()
{
	int score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
	int(*)[4] search(int(*p)[4], int n);;
	int* p;
	int i, k;
	printf("enter the number of student\n");
	scanf("%d", &k);
	printf("The score of No.%d stdent are:\n", k);
	p = search(score, k);
	for (i = 0; i < 4; i++)
		printf("%d ", *(*p + i));  
	printf("\n");
	return 0;
}
int(*)[4] search(int(*p)[4], int n)
{
	int(*pt)[4] = *(p + n);
	return pt;
}
