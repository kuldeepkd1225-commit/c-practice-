#include <stdio.h>
int sum_of_array(int arr[],int n){
    if(n<=0) return NULL;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    printf("Entre the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=sum_of_array(arr,n);
    printf("Sum of array elements is: %d",sum);
}