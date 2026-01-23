#include <stdio.h>
#include <stdlib.h>
void rotateArray(int nums[], int n, int k) {
    if(n<=0) return;
    k = k % n; 
    int* temp = (int*)malloc(n * sizeof(int));
    if(temp==NULL) return;
    for (int i = 0; i < k; i++) {
        temp[i] = nums[n - k + i];
    }
   for(int i=0;i<n-k;i++){
        temp[i+k]=nums[i];
   }
    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
    free(temp);
    temp=NULL;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int k;
    printf("Enter the number of rotations: ");
    scanf("%d",&k);
    rotateArray(array,n,k);
    printf("Array after rotation: ");
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}