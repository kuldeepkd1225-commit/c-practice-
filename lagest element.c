include <stdio.h>
#include <stdlib.h>
int largest(int arr[], int n) {
    int great= arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>=great){
            great=arr[i];
        }
    }
    return great;
}
int main(){
    int n;
    printf("give the size of the aaray: ");
    scanf("%d",&n);
    int array[n];
    printf("entre the elements of the aaray: ");
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int result=largest(array,n);
    printf("greatest element in the aaray is: %d",result);
    return 0;
}