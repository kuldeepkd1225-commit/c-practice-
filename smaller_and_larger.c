#include <stdio.h>
int* smallerAndLarger(int arr[],int n,int target){
    int* result = (int*)malloc(2*sizeof(int));
   int countSmaller = 0;
   int countLarger = 0;
   for(int i=0;i<n;i++){
         if(arr[i]<=target){
             countSmaller++;
         }
         if(arr[i]>=target){
             countLarger++;
         }
   }
   result[0] = countSmaller;
   result[1] = countLarger;
   return result;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);
    int* result = smallerAndLarger(arr, n, target);
    printf("Smaller or equal elements: %d\n", result[0]);
    printf("Larger or equal elements: %d\n", result[1]);
    free(result);
    return 0;
}
