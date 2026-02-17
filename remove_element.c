#include <stdio.h>
int removeElement(int* nums,int n,int val){
    int k=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n,val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    printf("Enter the value to remove: ");
    scanf("%d", &val);
    int newLength = removeElement(nums, n, val);
    printf("The new length of the array is: %d\n", newLength);
    printf("The modified array is:\n");
    for(int i=0;i<newLength;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}