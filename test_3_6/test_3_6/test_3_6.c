#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char str1[10];
//	char str2[6] = "china";
//	/*str2[6] = "jing";*/ 
//	str1[10] = "beijing";
//	//strcpy(str1, str2);
//	puts(str1);
//	return 0;
//}

//eg 6.8
//   有错误
//int main()
//{
//	char str[] = "i am a boy";
//	int cnum=0,i,len;
//	len = strlen(str) + 1;
//	for (i = 0; i < len; i++)
//	{
//		if (str[i]==' ')
//			cnum++;
//	}
//	printf("%d", cnum);
//	return 0;
//}
//int main()
//{
//	char str[81];
//	int word_num=0 , word = 0,i;
//	char c;
//	gets(str);
//	for (i = 0; (c = str[i]) != '\0'; i++)   //用 \0 判断结束循环
//	{
//		if (c == ' ')
//			word = 0;
//		else if (word == 0)   //这次循环到的元素标记 不是0；上次循环到的标记时0
//		{                     //空格的标记是1  非空格的标记是0
//			word = 1;         //word_num 初值就是 0
//			word_num++;
//		}
//	}
//	printf("There is %d words.", word_num);
//	return 0;
//}

////eg 6.9
//int main()
//{
//	char str1[81], str2[81], str3[81],strmax[81];
//	int i;
//	gets(str1); gets(str2); gets(str3);
//	/*strcpy(strmax,(strcmp(str1, str2)>0 ? str1 : str2));
//	strcpy(strmax, (strcmp(strmax[81], str3) >0? strmax[81] : str3));*/
//	for (i = 0; str1[i] != '\0'; i++)
//	{
//		if (str1[i] > str2[i])
//			strcpy(strmax, str1);
//		else if(str1[i] < str2[i])
//			strcpy(strmax, str2);
//	}
//	for (i = 0; str3[i] != '\0'; i++)
//	{
//		if (str3[i] > strmax[i])
//			strcpy(strmax, str3);
//		else if (str3[i] < strmax[i])
//			break;
//	}
//	puts(strmax);
//	return 0;
//}

//int main()
//{
//	char arr1[88] = "hello",arr2[88]="si";
//	strcpy(arr1, arr2);
//	puts(arr1);
//	return 0;
//}


//答案
int main()
{
	char str[3][20];
	char string[20];
	int i;
	for (i = 0; i < 3; i++) 
		gets(str[i]);                  
	/*strcpy(string,strcmp(str[0], str[1]) > 0 ? str[0] : str[1]);
	strcpy(string, strcmp(str[2], string) > 0 ? str[2] : string);*/
	if (strcmp(str[0], str[1]) > 0)
		strcpy(string, str[0]);
	else
		strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);
	puts(string);
	return 0;
}
