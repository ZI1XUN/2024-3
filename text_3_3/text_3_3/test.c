#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int max(float x,float y);
//	float a, b;
//	int c;
//	scanf("%f %f",&a,&b);
//	c = max(a,b);
//	printf("max is %d\n", c);
//	return 0;
//}
//
//int max(float x, float y)
//{
//	return(x > y ?x: y);
//}
//
//����һ��ʵ�� ��һ�����������ǵĺ�
//int main()
//{
//	float a, b,ret;
//	float app(float x, float y);
//	scanf("%f %f", &a, &b);
//	ret=app(a,b);
//	printf("app is %f\n", ret);
//	return 0;
//}
//
//float app(float x, float y)
//{
//	return(x + y);
//}
// 
// �д���
#include<stdio.h>
int main()
{
	int age_1, age_5,n;
	int jia(int x,int y);
	scanf("%d%d", &age_1,&n);
	age_5=jia(age_1,n);
	printf("age5 = %d\n",age_5);
	return 0;
}
int jia(int x,int y)
{
	int ret,i;
	for (i = 1; i <= 5;i++)
		ret = x + y;
	return y;
//}
// ������ȷ
//#include<stdio.h>
//int main()
//{
//	int age(int n);
//	printf("������ͬѧ�����%d\n", age(5));  //��һ��age(5)������age()����
//	return 0;
//}
//int age(int n)                    //main���� ʵ��n=5���� age��������
//{
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = age(n - 1) + 2;    //��һ���ڵݹ����age�������� age��4��age��3�� age��2�� age��1�� ����ѭ������õ�
//	return (c);
//}
//�ݹ���n��
//#include<stdio.h>
//int main()
//{
//	int ditui(int n);
//	int n;
//	scanf("%d", &n);
//	printf("%d!=%d", n, ditui(n));
//	return 0;
//}
//int ditui(int n)
//{
//	int ret;
//	if (n == 1||n==0)
//		ret = 1;
//	else if (n < 0)
//		printf("error!!�������");
//	else
//		ret = ditui(n - 1) * n;
//	return ret;
//}

//��ŵ���� 64����С��һ������ �ִ��µ��ϴӴ�С����A ����B C Ҫȫ��ԭ���ᵽC��
//#include<stdio.h>
//int main()
//{
//	int arr_1[64] = {1,2,3  ,64};
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int max(int x, int y);
//	int a[10], m, n, i;
//	printf("����10����");
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (m = a[0], n = 0, i = 1; i < 10; i++)
//	{
//		if (max(m, a[i]) > m)
//		{
//			m = max(m, a[i]);
//			n = i;
//		}
//	}
//	printf("��������%d���ǵ�%d��\n", m, i + 1);
//		
//	return 0;
//}
//int max(int x, int y)
//{
//	return(x > y ?  x : y);
//}

//#include<stdio.h>
//int main()
//{
//	float average(float arr[10]);
//	float grate[10];
//	float ret;
//	int i;
//	printf("������ѧ���ɼ���\n");
//	for (i = 0;i < 10; i++)
//		scanf("%f", &grate[i]);
//	ret = average(grate);
//	printf("10��ѧ��ƽ���ɼ���%f", ret);
//	return 0;
//}
// 
//float average(float arr[10])
//{
//	float sum=arr[0],ave;
//	int i;
//	for (i = 1; i < 10; i++)
//		sum = sum + arr[i];
//	ave = sum / 10;
//	return (ave);
//}

//#include <stdio.h>
//int main()
//{
//	int sort(int arr[]);
//	int arr[10],n,i;
//	printf("�����10��������\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	printf("�����Ϊ%d\n", sort(arr));
//	return 0;
//}
//
//int sort(arr[])
//{
//	
//	return arr;
//}