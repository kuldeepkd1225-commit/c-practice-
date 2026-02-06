=#include <stdio.h>
int countOfSmallerElement(int arr[],int n,int x){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Entre the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("Entre the %d element of array: ",i+1);
    scanf("%d",&arr[i]);
    }
    int x;
    printf("Entre the number x: ");
    scanf("%d",&x);
    int result = countOfSmallerElement(arr,n,x);
    printf("count of numbers smaller than or equal to x in array is: %d",result);
return 0;
}
