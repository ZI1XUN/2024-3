#define _CRT_SECURE_NO_WARNINGS
//eg 8.30
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	void search(int * p, int n);
//	int * p = (int*) calloc(5, 4);
//	int i;
//	printf("enter the grade of the 5 student:\n");
//	for (i = 0; i < 5; i++)
////		scanf("%5.2f", p + i);    //scanf������û������printf�ľ��ȿ��ơ�
//						//�磺 scanf("%5.2f", &a); �ǷǷ��ġ�������ͼ�ô��������С��Ϊ2λ��ʵ����
////		scanf("%d", p+i);
//
//	search(p, 5);
//	return 0;
//}
//void search(int* p, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
////		if (p[i] < 60) printf("NO.%d student is failed his/her grade is:%d\n", i, p[i]);
////		if (*(p + i) < 60) printf("NO.%d student is failed his/her grade is:%d\n", i, *(p + i));
//
//	}
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	void search(float* p, int n);
//	float* p = (float*)calloc(5, 4);
//	int i;
//	printf("enter the grade of the 5 student:\n");
//	for (i = 0; i < 5; i++)
//		scanf("%f", p + i);
//	search(p, 5);
//	return 0;
//}
//void search(float* p, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (*(p + i) < 60) printf("NO.%d student is failed his/her grade is:%5.2f\n", i, *(p + i));
//	}
//}


//9.1
//#include<stdio.h>
//int main()
//{
//	struct Student
//	{
//		long long int num;    //����10λ������ ������ int��long�Ķ��巶Χ  long long������19λ���ڵ�����
//		char name[20];
//		char sex[10];
//		char address[50];
//	};
//	struct Student student_1={201936020023,"ZIXUN","Man","hhu" };
//	//student_1 : 201936020023; ZIXUN; Man; HHU;
//	//student_1 ={201936,"ZIXUN","Man","hhu" };
//	//ֻ���ڶ��������ͬʱ���г�ʼ����ֵ����ʼ����ֵ�ͱ����Ķ��岻�ֿܷ�������������Ǵ����
//	printf("%lld\n%s\n%s\n%s\n", student_1.num, student_1.name, student_1.sex, student_1.address);
//	return 0;
//}

//9.2
//#include<stdio.h>
//int main()
//{
//	struct Student
//	{
//		long long int num;
//		char name[20];
//		float score;
//	}student_1,student_2;
//	//struct Student student_1 = { 201936020023,"ZIXUN",61.43 };
//	//struct Student student_2 = { 201935020060,"Hannuo",58.98 };
//	scanf("%lld%s%f", &student_1.num, student_1.name, &student_1.score);
//	scanf("%lld%s%f", &student_2.num, student_2.name, &student_2.score);
//	printf("the higher score is:\n");
//	if (student_1.score > student_2.score)
//		printf("%lld\n%s\n%5.2f\n", student_1.num, student_1.name, student_1.score);
//	else if(student_2.score > student_1.score)
//		printf("%lld\n%s\n%5.2f\n", student_2.num, student_2.name, student_2.score);
//	else
//	{
//		printf("%lld\n%s\n%5.2f\n", student_1.num, student_1.name, student_1.score);
//		printf("%lld\n%s\n%5.2f\n", student_2.num, student_2.name, student_2.score);
//	}
//	return 0;
//}
////201936020023 ZIXUN 61.43 
////201935020060 Hannuo 58.98

////9.3
//#include<stdio.h>
//#include<string.h>
//struct Person
//{
//	char name[20];
//	int count;
//}leader[] = { "li",0,"zhang",0,"sun",0 };
//int main()
//{
//	int i, j;
//	char leader_name[20];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%s", leader_name);
//		for (j = 0; j < 3; j++)
//		{
//			if (strcmp(leader_name, leader[j].name) == 0)
//				leader[j].count++;
//		}
//	}
//	printf("\nResult:\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s%d\n", leader[i].name, leader[i].count);
//	}
//	
//	return 0;
//}

////9.4
//#include<stdio.h>         //�ṹ������ ����Ԫ�� ע�ⲻҪ���� &����������
//struct Student			//ѡ���㷨
//{
//	long long int num;
//	char name[20];
//	float score;
//}student[3] /*= {10101,"sun",72,10102,"li",89,10103,"zhao",88}*/;
//int main()
//{
//	
//	int i, j, k;
//	float score;
//	for (i = 0; i < 3; i++)
//		scanf("%lld %s %f", &student[i].num, student[i].name, /*������*/&student[i].score);
//	for (i = 0; i < 2; i++)
//	{
//		k = i;
//		struct Student temp;
//		for (j = i + 1; j < 3; j++)
//			if (student[j].score > student[k].score)
//				k = j;
//			//if (k != i);
//			temp = student[k]; student[k] = student[i]; student[i] = temp;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%lld %s %5.2f\n", student[i].num, student[i].name, student[i].score);
//	}
//	return 0;
//}

//#include<stdio.h>
//struct Student
//{
//	long num;
//	char name[20];
//	char sex[10];
//	float score;
//};
//int main()
//{
//	struct Student stu1 = {101101,"zhao","man",78};
//	struct Student* p = &stu1;
//	printf("%ld %s %s %5.2f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
//	return 0;
//}

////9.6
//#include<stdio.h>
//struct Student
//{
//	long num;
//	char name[20];
//	char sex[10];
//	float score;
//};
//int main()
//{
//	struct Student stu[3] = { 1101,"zhao","female",79,1102,"qian","male",56,1103,"sun","male",86 };
//	struct Student* p = stu;
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%ld %s %s %5.2f\n", (p + i)->num, (p + i)->name, (p + i)->sex, (p + i)->score);
//	}
//}

