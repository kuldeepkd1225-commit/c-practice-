#include <stdio.h>
#include <stdlib.h>
int* alternate_in_array(int arr[], int n){
    if(n<=0) return NULL;
    int* temp = (int*)malloc((n+1)/2*sizeof(int));
    for(int i=0;i<n;i+=2){
        temp[i/2] = arr[i];
    }
    return temp;
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
    int* result = alternate_in_array(array,n);
    printf("Alternate elements in the array: ");
    for(int i=0;i<(n+1)/2;i++){
        printf("%d ",result[i]);
    }
    free(result);
    result=NULL;
}
