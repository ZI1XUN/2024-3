#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, n = 6, i, j = 0;
    printf("nums=");
    int* p = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        *(p + i) = num;
        if (*(p + i) == 1) j++;
        else j = 0;
    }
    printf("%d", j);
    return 0;
}