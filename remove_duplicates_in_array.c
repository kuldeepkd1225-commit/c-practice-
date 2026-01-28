#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0) return 0;
    int k=1;
    for(int i=1;i< numsSize;i++){
        if(nums[i] != nums[k-1]){
            nums[k]= nums[i];
            k++;
        }
    }
    return k;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int newArray = removeDuplicates(arr, n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newArray; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNew array: %d\n", newArray);
    return 0;
}
