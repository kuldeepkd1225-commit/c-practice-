#include <stdio.h>
   int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           return i;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int result = search(arr, n, x);
    if(result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
