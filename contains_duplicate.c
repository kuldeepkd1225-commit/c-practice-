#include<stdio.h>
#include<stdbool.h>
int compare(const void* a,const void* b){
    return(*(int*)a - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
   qsort(nums,numsSize,sizeof(int),compare);
   for(int i=1;i<numsSize;i++){
    if(nums[i] == nums[i-1]){
        return true;
    }
   }
   return false;
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
    bool result = containsDuplicate(nums, numsSize);
    if(result){
        printf("The array contains duplicate elements.\n");
    } else {
        printf("The array does not contain duplicate elements.\n");
    }
    return 0;
}