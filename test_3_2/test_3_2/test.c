#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() 
//{
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
//    return 0;
//}
//int main() 
//{
//    char chr;
//    scanf("%c", &chr);
//    printf("%d", chr);
//}
void Swap2(int* px, int* py)  //*有实际作用 “指向”地址px py 即*px==a  *py==b
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}
