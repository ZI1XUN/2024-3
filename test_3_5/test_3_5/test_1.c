#define _CRT_SECURE_NO_WARNINGS
//eg6.1
//#include<stdio.h>
//int main()
//{
//	int num[10], i;
//	printf("enter 10 nums:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &num[i]);
//	printf("\n");
//	printf("reback the array\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", num[9 - i]);
//	return 0;
//}

//쳲���������ǰ40����
//#include<stdio.h>
//int main()
//{
//	int fib[40]={1,1}, i;
//	//fib[0] = fib[1] = 1;
//	for (i = 2; i < 40; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//	printf("fib[40]=\n");
//	for (i = 0; i < 40; i++)
//	{ 
//		if (i % 5 == 0) printf("\n");  //ÿ5������һ�У���������������������
//		printf("%12d", fib[i]);
//	}
//	return 0;
//}

//eg6.3
//#include<stdio.h>
//int main()
//{
//	void sort(float arr[]);
//	float area[10];
//	int i;
//	printf("enter 10 areas:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &area[i]);
//	sort(area);
//	printf("the sorted area:\n");
//	for (i = 0; i < 10; i++)
//		printf("%10.1f", area[i]);
//	return 0;
//}
//void sort(float arr[])
//{
//	int i,j;
//	for (i = 0; i < 10; i++)
//	{
//		for(j=i+1;j<8;j++)
//			arr[i] = (arr[i] < arr[j] ? arr[i] : arr[j]);
//	}
//}

//eg6.4
//#include<stdio.h>
//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	//int b[3][2] = { {0},{0},{0} };   //�����ά����ʱ ���س�ʼ��
//	int b[3][2];   
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//			b[j][i] = a[i][j];
//	}
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			printf("%2d", b[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//eg6.5
//#include<stdio.h>
//int main()
//{
//	int matrix[3][4];
//	int i, j,max;
//	int row, colum;
//	printf("enter nums in the maxtrix:\n");
//	//scanf("%d", &matrix);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &matrix[i][j]);
//		}
//		printf("\n");  //ע����һ�е�λ�ã�����
//	}
//	max = matrix[0][0];
//	row = 0;
//	colum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//max = max > matrix[i][j] ? max : matrix[i][j] ,row=i,colum=j;//ֻ���ж����� ���ܽ�һ���ж�row colum
//			/*row = i;           
//			colum = j;*/      //i j ������ô��������������б仯
//			if (matrix[i][j] > max)      //ֻ��if���� ��ִ���ڲ�����
//			{							 //��Ŀ������ һ��ֻ��ִ���ڲ���һ����������
//				max = matrix[i][j];
//				row = i;
//				colum = j;
//			}
//		}
//	}
//	printf("max=%d\nrow=%d\ncolum=%d\n", max,row,colum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int size,len;
//	char chr[] = "China";
//	size = sizeof(chr);
//	len = strlen(chr);
//	printf("%d %d\n", size,len);
//}

#include<stdio.h>
int main()
{
	char c[6];
	scanf("%s", c);
	printf("%s", c);
	return 0;
}