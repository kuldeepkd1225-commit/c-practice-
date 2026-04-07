#include <stdio.h>i
int majorityElement(int* nums, int numsSize) {
    int count =0;
    int candidate =0;
    for(int i=0; i<numsSize;i++){
       if(count == 0){
        candidate = nums[i];
       }
       if(nums[i] == candidate)
        count ++;
       else
        count--;
    }
    return candidate;
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
    int result = majorityElement(nums, numsSize);
    printf("The majority element in array is: %d\n", result);
    return 0;
}
// we could do use the logic that if a number is occuring more than n/2 times then it is the majority element but that would require extra amount of memory and the time complexity would be O(n^2).//