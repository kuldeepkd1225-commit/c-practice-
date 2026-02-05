#include <stdio.h>
#include <stdbool.h>
bool palindromic_array(int arr[],int n){
    for(int i=0;i<n;i++){
         if(arr[i]<0) return false;
         if(arr[i]%10==0 && arr[i]!=0) return false;
         int reversed_number=0;
         int temp=arr[i];
         while(temp>0){
            reversed_number=reversed_number*10+temp%10;
            temp/=10;
        }
        if(reversed_number!=arr[i]) return false;
    }
    return true;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(palindromic_array(arr,n)){
        printf("The array is palindromic.");
    } else {
        printf("The array is not palindromic.");
    }
    return 0;
}
