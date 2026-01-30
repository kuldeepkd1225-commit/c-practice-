#include <stdio.h>
void min_max_in_array(int arr[],int n,int* min,int* max){
    *min=arr[0];
    *max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
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
    int min,max;
    min_max_in_array(array,n,&min,&max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    return 0;
}
