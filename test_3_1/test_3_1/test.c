#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// 1 ����n�Ľ׳�
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int r = 1;
//	printf("������ָ��n��ֵ\n");
//	scanf("%d",&n);
//	while (i<=n)
//	{
//		r = r * i;
//		i++;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//2 ����1��10�Ľ׳˺�
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int r = 1;
//	int sum = 0;
//	printf("������ָ��n��ֵ\n");
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
//3. ��һ�����������в��Ҿ����ĳ������n
//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	printf("��������Ҫ��Ѱ������k\n");
//	scanf("%d",&k);
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = size-1;
//	while (left<=right)
//	{
//		int mid = (left+right) / 2;  //mid ���� left right �ı仯���仯 ��ѭ����
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
//			printf("�ҵ�k���±�%d\n", mid);
//			break;
//		}	
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//4. ��д���룬��ʾ����ַ��������ƶ������м���
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
//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����.
#include <stdio.h>
int main()
{
	char password[] = "xyy050409.";
	char yourword[]=""
	return 0;
}