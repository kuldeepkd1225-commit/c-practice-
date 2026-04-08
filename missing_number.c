#include <stdio.h>
int missingNumber(int* nums, int numsSize) {
    int all_sum = numsSize*(numsSize+1)/2;
    int number=0;
    for(int i=0;i<numsSize;i++){
        number+=nums[i];
    }
    return all_sum - number;
}
int main(){
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("The array should contain numbers from 1 to %d with one number missing.\n And enter 0 in starting  to fill space of missing number.\n", numsSize);
    printf("Enter the elements of the array: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    printf("The missing number is: %d",missingNumber(nums, numsSize));
    return 0;
}
