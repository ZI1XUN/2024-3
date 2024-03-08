#define _CRT_SECURE_NO_WARNINGS
//eg 8.8
//#include<stdio.h>
//int main()
//{
//	int i;
//	int* p;
//	int nums[10] ={ 1,2,3,4,5,6,7,8,9,7 };
//	void reback(int arr[], int n);
//	p = &nums[0];
//	reback(nums, 10);
//	printf("nums[10]=\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p+i));
//	return 0;
//}
//
//void reback(int arr[], int n)
//{
//	int arr2[100];
//	int* p, * p2 ;
//	int i;
//	p = &arr; p2 = &arr2;
//	for (i = 0; i < n; i++)
//	{
//		*(p2 + i) = *(p + 9 - i);  //arr的元素 逆向赋给arr2
//	}
//	printf("new nums[10]=\n");
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = *(p2 + i);  //arr2的元素再赋给arr
//		printf("%d ", *(p + i));
//	}
//}
//void reback(int arr[], int n)
//{
//	int temp, i, j, m = (n - 1) / 2;
//	for (i = 0; i < m; i++)
//	{
//		j = n - 1 - i;
//		temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//	}
//}
#include<stdio.h>
int main()
{
	int* pi = NULL;
	float* pf = NULL;
	char* pc = NULL;
	double* pd = NULL;
	printf("%d\n", sizeof(pi));
	printf("%d\n", sizeof(pf));
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pd));

	return 0;
}
