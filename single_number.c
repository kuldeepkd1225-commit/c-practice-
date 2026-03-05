#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
    int result =0;
    for(int i=0;i<numsSize;i++){
        result^=nums[i];
    }
    return result;
}
int main(){
    int numsSize;
    printf("Enter the size of the nums array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the numbers: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d", &nums[i]);
    }
    int result = singleNumber(nums, numsSize);
    printf("The single number in array is: %d\n", result);
    return 0;
}
