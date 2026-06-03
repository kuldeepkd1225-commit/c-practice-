#include <stdio.h>
void swap(int arr[],int n,int k){
    int temp=arr[k-1];
    arr[k-1]=arr[n-k];
    arr[n-k]=temp;
}
int main(){
    int n,k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    swap(arr,n,k);
    printf("The array after swapping: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
