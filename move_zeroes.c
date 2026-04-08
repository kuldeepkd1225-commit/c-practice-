#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j++] = nums[i];
        }
    }
    while(j<numsSize){
            nums[j++]=0;
        }
}
int main(){
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("Enter the elements of the array: ");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    printf("Before moving zeroes: ");
    for(int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
    moveZeroes(nums, numsSize);
    printf("\nAfter moving zeroes: ");
    for(int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }

    return 0;
}