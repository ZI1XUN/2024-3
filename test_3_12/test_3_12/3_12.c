#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//eg8.28
// int main()
//{
//	char* name[] = { "today","the","weather","is","sunny" };
//	char** p;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		p = &name[i];
//		printf("%s ", *p);
//	}
//	return 0;
//}

//eg 8.29 (错题）
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//int* num[] = { "1,2,3","4,5,6","7,8,9"};
//	//error1:"1,2,3" 实际上还是字符串 并非整形数组
//	//int** p;
//	char* num[] = { "1,2,3","4,5,6","7,8,9" };
//	char** p;
//	int i;//j;
//	for (i = 0; i < 3; i++)
//	{
//		p = num + i;
//		//for (j = 0; j < 3; j++)
//		//{
//		//	//printf("%d ", **p);
//		////error2：“1，2，3”是字符串 **p指向的并非1 2 3每个数字 实际上无意义
//		////*p指向的是字符串 “1，2，3”
//		//	
//		//}
//		//printf("\n");
//		printf("%s ", *p);
//	}
//	return 0;
//}

////答案
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,78,6 };
//	int* num[5] = { &a[0],&a[1], &a[2],&a[3], &a[4] };
//	int** p;
//	int i;
//	p = num;
//	for (i = 0; i < 5; i++) //i控制循环
//	{
//		printf("%d ", **p);
//		p++; //p控制下标地址变换
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	void resort(int arr[], int n);
//	void print(int arr[], int n);
//	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//	
//	resort(a, 9);
//	print(a, 9);
//	return 0;
//}
//void resort(int arr[], int n)
//{
//	int i,  temp, * p, * pn;
//	p = arr;
//	pn = arr + n - 1;
//	for (i = 0; i < n / 2; i++)
//	{
//		//temp = *p; *p = *(arr + n - 1); *pn = temp;
//		temp = *p; *p = *(pn - i); *(pn - i) = temp;
//		//p,pn要跟随变化
//		p++;
//	}
//}
//void print(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//eg8.9 指针变量做实参    (注意更改函数名时 全局都要逐一检查更改)
//#include<stdio.h>
//int main()
//{
//	void inv(int* arr, int n);
//	void print(int *arr, int n);
//	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//	int* p1 = a;
//	inv(p1, 9);
//	print(p1, 9);
//	return 0;
//}
//void inv(int *arr, int n)
//{
//	int i,  temp, * p, * pn;
//	p = arr;
//	pn = arr + n - 1;
//	for (i = 0; i < n / 2; i++)
//	{
//		temp = *p; *p = *(pn - i); *(pn - i) = temp;
//		p++;
//	}
//}
//void print(int *arr, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//eg8.10
//#include<stdio.h>
//int main()
//{
//	void sort(int* arr, int n);
//	void print(int* arr, int n);
//	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = num;
//	sort(p, 10);
//	print(p, 10);
//	return 0;
//}
//
//void sort(int* arr, int n)
//{
//	int i, j, k, temp;
//	for (i = 0; i < n-1; i++)
//	{
//		k = i;
//		for (j = i; j < n; j++)
//		{
//			if (*(arr + i) < *(arr + j)) k = j;
//			//temp = *(arr + i); *(arr + i) = *(arr + k); *(arr + k) = temp;
//			if (k != i);
//			temp = *(arr + i); *(arr + i) = *(arr + k); *(arr + k) = temp;
//		}
//	}
//}
//void print(int* arr, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d ", *(arr + i));
//}

//eg8.12
//#include<stdio.h>
//int main()
//{
//	int num[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int* p = num;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		p = num + i;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t",*(p+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//eg 8.13
// 作业
//#include<stdio.h>
//int main()
//{
//	int num[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int* p = num;
//	int row, column,i,j;
//	printf("enter thr row:i the column:j\n");
//	scanf("row=%d ,column=%d", &row, &column);
//	for (i = 0; i < row; i++)
//	{
//		p = num + i;
//		for (j = 0; j < column; j++)
//		{
//			if (i == (row - 1) && j == (column - 1))
//			{
//				printf("a[%d][%d]=%d\n", i, j, *(p + j));
//				goto END;
//			}
//		}
//	}
//END:
//
//	return 0;
//}
//答案
//#include<stdio.h>
//int main()//行列都是从0开始
//{
//	int num[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int(*p)[4], i, j;     //p指向 含有4个int型元素 的数组
//	p = num;              //使p指向一维数组
//	printf("enter the row and column\n");
//	scanf("%d %d", &i, &j);
//	printf("a[%d][%d]=%d", i, j, *(*(p + i) + j));
//	return 0;
//}