#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int age_1, age_5;
//	int jia(int x, int y);
//	printf("���֪age_1�Ƕ���");
//	scanf("%d", &age_1);
//	age_5 = jia(age_1, 2);
//	printf("age5 = %d\n", age_5);
//	return 0;
//}
//int jia(int x, int y)
//{
//	int ret=x, i;
//	for (i = 1; i < 5; i++)
//	{
//		ret = ret + y;
//	}
//	return ret;
//}

//error!!
//#include <stdio.h>
//int main()
//{
//	int sort(int arr[]);
//	int arr_1[10], arr_2[10], i;
//	printf("�����10��������\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr_1[i]);
//	printf("%d\n", arr_1);
//	arr_2[10] = sort(arr_1);
//	for (i = 0; i < 10; i++)
//		printf("%d ", &arr_2[i]);
//	return 0;
//}
//
//int sort(int arr[])
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			arr[j] = (arr[j] < arr[j + 1] ? arr[j] : arr[j + 1]);
//			arr[j + 1] = (arr[j] > arr[j + 1] ? arr[j] : arr[j + 1]);
//		}
//	}
//	return arr;
//}

//#include<stdio.h>
//int main()
//{
//	void sort(int arry[], int n);
//	int a[10], i;
//	printf("enter arry:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	sort(a, 10);
//	printf("the sorted arry:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//void sort(int arry[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arry[j] < arry[k])
//				k = j;
//			t = arry[k];
//			arry[k] = arry[i];
//			arry[i] = t;
//		}
//	}
//	return 0;
//}

//eg 7.14
//#include<stdio.h>
//float Max, Min;
//int main()
//{
//	float deal(float arr[]);
//	float sorce[10],ret;
//	int i;
//	printf("enter sorces:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &sorce[i]);
//	ret=deal(sorce);
//	printf("the max is %f ;the min is %f;and the average is %f",Max,Min,ret );
//	return 0;
//}
//
//float deal(float arr[])
//{
//	int i;
//	 Max = arr[0];       //ȫ�ֱ��� ����ֱ�ӵ��� ��Ҫ�ظ�����
//	 Min = arr[0];       //�ظ����� ����һ�� ȫ�ֱ���������
//	float sum=0,aver;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>Max)
//			Max = arr[i];
//		else if (arr[i]<Min)
//			Min = arr[i];
//		sum = sum + arr[i];
//	}
//	aver = sum / 10;
//	return aver;
//}

//#include <stdio.h>
//int main()
//{
//	extern void del(char array[],char chr);
//	char str[30];
//	char chr;
//	int i;
//	printf("input the str:\n");
//	for (i = 0; i < 21; i++)  //21��ӦΪthis is a c programe\0 �ַ���������21
//		scanf("%c", &str[i]);
//	printf("��Ҫɾ�����ַ���:\n");
//	scanf("%c", &chr);
//	del(str,chr);
//	printf("new str is:\n");
//	for (i = 0; i < 30; i++)
//		printf("%c", str[i]);
//	return 0;
//}                                          //���⣺���һ���С��������̣���

#include<stdio.h>
int main()
{
	int max_gy(int x, int y);
	int min_gb(int x, int y);
	int num1, num2,ret_gy,ret_gb;
	printf("������������������:\n");
	scanf("%d %d", &num1, &num2);
	ret_gy = max_gy(num1, num2);
	ret_gb = min_gb(num1, num2);
	printf("%d��%d�����Լ���ǣ�%d����С�������ǣ�%d\n", num1, num2, ret_gy, ret_gb);
	return 0;
}

int max_gy(int x, int y) 
{
	int i, j, n, m;
	for (i = 0;i<x; i++)
	{
		n = x / (x - i);
		for(j=0;j<y;j++)
		{
			m = y / (y - j);
			if (m == n)
				goto end;
			else
				continue;
		}

	}
end:
	return n;
}
int min_gb(int x, int y)
{
	int i, j, n, m;
	for (i = 1;; i++)
	{
		n = x * i;
		for (j = 1;; j++)
		{
			m = y * j;
			if (n == m)
				goto end;
			else
				continue;
		}
	}
end:
	return n;
}