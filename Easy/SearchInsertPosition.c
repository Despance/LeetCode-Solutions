//https://leetcode.com/problems/search-insert-position/submissions/901830781/
//Author: Mustafa Emir Uyar

#include<stdlib.h>
#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target){

    int low = 0;
    int high = numsSize-1;
    int current;

    while (1){
        current = (low+high)/2;
        
        if (nums[current] < target){
            if (low > high)
                return low;
            low = current+1;
        }
        else if(nums[current] > target){
            if (low > high)
                return low;
            high = current-1;

        }
        else{
            return current;
        }   
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {3,5,7,9,10};
    int result = searchInsert(arr,5,8);
    printf("%d",result);
    return 0;
}
