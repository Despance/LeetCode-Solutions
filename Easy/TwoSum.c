#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i]+nums[j] == target)
            {
                int* resultArray =  (int*) malloc(sizeof(int)*2);
                resultArray[0] = i;
                resultArray[1] = j;
                *returnSize = 2;
                return resultArray; 
            }   
        }
    }
    *returnSize = 0;
    return NULL;
}


int main(){

    int arr[] = {3,3};

    int* resArr = twoSum(arr,2,6,arr);

    printf("result: %d , %d",resArr[0],resArr[1]);
    return 0;
}