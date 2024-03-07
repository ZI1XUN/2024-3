#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//eg 8.1
//int main()
//{
//	int num1,num2, *num1_pointer,*num2_pointer;//定义处* 表明 这是指针变量
//	num1 = 12;
//	num2 = 9;
//	num1_pointer = &num1;
//	num2_pointer = &num2;
//	printf("%d %d", *num1_pointer,*num2_pointer);//此处* 
//	return 0;
//}

//eg8.2
//int main()
//{
//	int a, b, * p, * p_1, * p_2;
//	printf("输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	p_1 = &a;
//	p_2 = &b;
//	if (a < b)
//	{
//		p = p_1; p_1 = p_2; p_2 = p;
//	}
//	printf("max=%d;min=%d\n", *p_1, *p_2);
//	return 0;
//
// }

//eg 8.3
//int main()
//{
//	void cmp(int a,int b,int* pa, int* pb);
//	int num1, num2;
//	int* p1, * p2;
//	printf("enter 2 integer numbers:\n");
//	scanf("%d %d", &num1, &num2);
//	p1 = &num1;
//	p2 = &num2;
//	cmp(num1,num2,p1, p2);
//	//printf("max=%d;min=&d\n", *p1, *p2);
//	return 0;
//}
//
//void cmp(int a,int b,int* pa, int* pb)
//{
//	if (a < b)
//	{
//		pa = &b; pb = &a;
//	}
//	printf("max=%d;min=%d\n", *pa, *pb);
//}

//eg 8.4
//int main()
//{
//	int num1, num2, * pn1, * pn2;
//	void swap(int* p1, int* p2);
//	printf("enter 2 integer numbers:\n");
//	scanf("%d %d", &num1, &num2);
//	pn1 = &num1;
//	pn2 = &num2;
//	if (num1 < num2)
//		swap(pn1,pn2);
//	printf("max=%d,min=%d\n", *pn1, *pn2);
//	return 0;
//}
//static void swap(int* p1, int* p2) 
//{
//	int* p;
//	*p = *p1;
//	*p1 = *p2;
//	*p2 = *p;
//}

//eg8.5
//int main()
//{
//	int nums[3];
//	int* pa, * pb, * pc;
//	int i;
//	void exchange(int arr[]);
//	printf("enter 3 numbers:\n");
//	for (i = 0; i < 3; i++)
//		scanf("%d", &nums[i]);
//	printf("\nnums[3]=");
//	for (i = 0; i < 3; i++)
//		printf("%d ", nums[i]);
//	printf("\n");
//	exchange(nums);
//	printf("new nums[3]=");
//	for (i = 0; i < 3; i++)
//		printf("%d", nums[i]);
//}
//void exchange(int arr[])   //函数有错
//{
//	int i,max=arr[0],t;
//	for (i = 0; i < 3; i++)
//	{
//		if (max > arr[i])
//		{
//			t = arr[i];
//			arr[i] = max;
//			while(i<2)
//				arr[i + 1] = arr[i];
//		}
//	}
//}

//int main()
//{
//	void exchange(int* q1, int* q2, int* q3);
//	int a, b, c, * p1, * p2, * p3;
//	printf("please enter 3 numbers:\n");
//	scanf("%d %d %d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	exchange(p1, p2, p3);
//	printf("the order is:%d,%d,%d\n", *p1, *p2, *p3);
//	return 0;
//}
//void exchange(int* q1, int* q2, int* q3)
//{
//	void swap(int* pt1, int* pt2);
//	if (*q1 < *q2) swap(q1, q2);           //1 2比出一个大的
//	if (*q1 < *q3) swap(q1, q3);           //在上面基础上  较大的 和 3 比出一个最大的
//	if (*q2 < *q3) swap(q2, q3);          // 2 3位 比出一个大小顺序
//} 
//void swap(int* pt1, int* pt2)
//{
//	int temp;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}
//int main()
//{
//	int a = 2;
//	int j, k;
//	++a;
//	//a = ++a;
//	printf("j=%d,k=%d", a);
//	return 0;
//}
 
//eg8.6
//下标法
//int main()
//{
//	int nums[10],i;
//	printf("enter 10 nums;\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &nums[i]);
//	printf("nums[10]=");
//	for (i = 0; i < 10; i++)
//		printf("%d ", nums[i]);
//	return 0;
//}
//数组名计算法
//int main()
//{
//	int nums[10], i;
//	printf("enter 10 nums;\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d",nums+i);
//	printf("nums[10]=");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(nums + i));
//	return 0;
//}
//指针变量法
//int main()
//{
//	int nums[10], * p = &nums[0], i;
//	printf("enter 10 nums;\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p+i);
//	printf("nums[10]=");
//	//for (i = 0; i < 10; i++)
//	//	printf("%d ", *(p + i));
//	for (p = nums; p < nums + 10; p++)
//		printf("%d ", *p);
//	return 0;
//}


//eg 8.7
//int main()
//{
//	int nums[10], * p, i;
//	for (p = &nums[0]; p < (nums + 10); p++)     //!   p=nums   or  p=&nums[0]
//		scanf("%d", p);
//	for (p = &nums[0]; p  < (nums + 10); p++)
//		printf("%d ", *(p ));
//	return 0;
//}
