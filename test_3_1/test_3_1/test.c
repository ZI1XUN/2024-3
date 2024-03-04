#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// 1 计算n的阶乘
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int r = 1;
//	printf("请输入指定n的值\n");
//	scanf("%d",&n);
//	while (i<=n)
//	{
//		r = r * i;
//		i++;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//2 计算1—10的阶乘和
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int r = 1;
//	int sum = 0;
//	printf("请输入指定n的值\n");
//	scanf("%d",&n);
//	while (i<=n)
//	{
//		r = r * i;
//		sum += r;
//		i++;
//	}
//	printf("%d\n", r);
//	printf("%d\n", sum);
//	return 0;
//}
//3. 在一个有序数组中查找具体的某个数字n
//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	printf("请输入需要找寻的数字k\n");
//	scanf("%d",&k);
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = size-1;
//	while (left<=right)
//	{
//		int mid = (left+right) / 2;  //mid 根据 left right 的变化而变化 在循环内
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到k的下标%d\n", mid);
//			break;
//		}	
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//4. 编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//int main() 
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	int i = 1;
//	int n = (strlen(arr1)+1 ) / 2;
//	while (i <= n)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++; 
//		right--;
//		i++;
//		printf("%s\n",arr2);
//
//	}
//	return 0;
//}
//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序.
#include <stdio.h>
int main()
{
	char password[] = "xyy050409.";
	char yourword[]=""
	return 0;
}