#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int* p = NULL;
//	int a;
//	p = &a;
//	*p = 1;
//	printf("%d", a);
//	return 0;
//}



//eg8.27（错题）
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int* p[5],*temp;
//	int i;
////	char name1 = "Follow me", name2 = "BASIC", name3 = "Great Wall", name4 = "FORTRAN", name5 = "Computer design";
//// 错误1：想创建指针数组的 元素数组  但数组形式错误  name1[]="Follow me"
//
//char name1[] = "Follow me", name2[] = "BASIC", name3[] = "Great Wall", name4[] = "FORTRAN", name5[] = "Computer design";
//p[0] = name1;p[1] = name2;p[2] = name3;p[3] = name4;p[4] = name5;
//
//
//	for (i = 0; i < 4; i++)
//	{
//		//if (p[i] > p[i + 1])//strcmp
//// 错误2：p[i]存入的是 各元素数组 的 首字符地址  这只是比较了首字符
//		if (strcmp(p[i], p[i + 1]) > 0)
//		{
//			temp = p[i];
//			p[i] = p[i + 1];
//			p[i + 1] = temp;
//		}
//		//错误3：只是在依次从前往后比 大小互换  ！！没有做到排序！！  而且最开始比大小也有错误
//	}
//	for (i=0; i < 5; i++)
//		printf("%s\n", p[i]);
//	return 0;
//}

//eg8.27（答案）
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void sort(char* name[], int n);
//	void print(char* name[], int n);
//	char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer design" };// 指针数组，字符串本身就是数组
//	int n = 5;
//	sort(name, n);
//	print(name, n);
//	return 0;
//}
//
//void sort(char* name[], int n)
//{
//	char* temp;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)  //依次挑前四个
//	{
//		k = i;// 下一层循环 也是用了i做判断 用k保持i的不变
//		for (j = i + 1; j < n; j++)//挑i之后的几个
//		{
//			if (strcmp(name[k], name[j]) > 0)  //后一个比前一个小 （字符数组 比大小）
//			{
//				k = j;
//			}
//		}
//		if (k != i); //k==j==i+1
//		{
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}
//	}
//}
//
//void print(char* name[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//}
		
//eg 8.28
