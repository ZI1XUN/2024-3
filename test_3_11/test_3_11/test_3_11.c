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



//eg8.27�����⣩
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int* p[5],*temp;
//	int i;
////	char name1 = "Follow me", name2 = "BASIC", name3 = "Great Wall", name4 = "FORTRAN", name5 = "Computer design";
//// ����1���봴��ָ������� Ԫ������  ��������ʽ����  name1[]="Follow me"
//
//char name1[] = "Follow me", name2[] = "BASIC", name3[] = "Great Wall", name4[] = "FORTRAN", name5[] = "Computer design";
//p[0] = name1;p[1] = name2;p[2] = name3;p[3] = name4;p[4] = name5;
//
//
//	for (i = 0; i < 4; i++)
//	{
//		//if (p[i] > p[i + 1])//strcmp
//// ����2��p[i]������� ��Ԫ������ �� ���ַ���ַ  ��ֻ�ǱȽ������ַ�
//		if (strcmp(p[i], p[i + 1]) > 0)
//		{
//			temp = p[i];
//			p[i] = p[i + 1];
//			p[i + 1] = temp;
//		}
//		//����3��ֻ�������δ�ǰ����� ��С����  ����û���������򣡣�  �����ʼ�ȴ�СҲ�д���
//	}
//	for (i=0; i < 5; i++)
//		printf("%s\n", p[i]);
//	return 0;
//}

//eg8.27���𰸣�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void sort(char* name[], int n);
//	void print(char* name[], int n);
//	char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer design" };// ָ�����飬�ַ��������������
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
//	for (i = 0; i < n - 1; i++)  //������ǰ�ĸ�
//	{
//		k = i;// ��һ��ѭ�� Ҳ������i���ж� ��k����i�Ĳ���
//		for (j = i + 1; j < n; j++)//��i֮��ļ���
//		{
//			if (strcmp(name[k], name[j]) > 0)  //��һ����ǰһ��С ���ַ����� �ȴ�С��
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
