#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        if(nums[i]>=target) return i;
    }
    return numsSize;
}
int main(){
    int numsSize, target;
    printf("Enter the size of the array: ");    
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the elements of the array in sorted order: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d", &nums[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
    int index = searchInsert(nums,numsSize,target);
    printf("The target value %d should be inserted at index: %d\n", target, index);
    return 0;
}