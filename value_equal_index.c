#include <stdio.h>
//as per the problem we have to consider 1-based indexing
int value_equal_to_index(int* arr,int n, int temp[]){
    int j=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==i){
            temp[j++]=arr[i];
        }
    }
    return j;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n+1];
    int temp[n];
    printf("Enter the elements of the array: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
    int count= value_equal_to_index(array,n,temp);
    if(count>0){
        printf("Elements equal to their index are: ");
        for(int i=0;i<count;i++){
            printf("%d ",temp[i]);
        }
        printf("\n");
    }
    else{
        printf("No elements are equal to their index.\n");
    }
    return 0;
}
