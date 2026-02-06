#include <stdio.h>
void arrayInsertAtIndex(int arr[],int *n,int index,int val){
    for(int i= *n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index] = val;
    (*n)++;
}
int main(){
    int n;
    printf("Entre size of array: ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
    printf("Entre the %d element of array: ",i+1);
    scanf("%d",&arr[i]);
    }
    int index;
    printf("Entre the index: ");
    scanf("%d",&index);
    int val;
    printf("Entre the value: ");
    scanf("%d",&val);
    printf("ARRAY after adding a new value : ");
        arrayInsertAtIndex(arr,&n,index,val);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
