#include <stdio.h>
void rotate_array_by_1(int arr[], int n){
    if(n<=1) return;
    int temp[n];
    temp[0] = arr[n-1];
    for(int i=1; i<n; i++){
        temp[i] = arr[i-1];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n<=0){
        printf("array can'nt rotate.\n");
    }
    int array[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    rotate_array_by_1(array, n);
    printf("Array after rotation by 1: ");
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
