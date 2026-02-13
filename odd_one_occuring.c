#include<stdio.h>
int getOddOneOccuring(int arr[], int size){
    int x =0;
    for(int i=0;i<size;i++){
        x^=arr[i];
    }
    return x;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array (only one element should occur odd number of times): ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = getOddOneOccuring(arr,n);
    printf("The odd occurring element is: %d",result);
}
