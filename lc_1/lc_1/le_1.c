#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    void twoSum(int* nums, int numsSize, int target);
    int nums[] = { 3,3,3 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    twoSum(nums, numsSize, target);
    return 0;
}

void twoSum(int* nums, int numsSize, int target)
{
    int i, j;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
               /*int* ret = (int* )malloc(2* sizeof(int));
                ret[0] = i; ret[1] = j;*/
                printf("[%d,%d]", i, j);
            }
        }
    }
}