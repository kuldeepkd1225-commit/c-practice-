#include <stdio.h>
void merge(int* nums1,int*nums2,int m,int n){
    int i =m-1;
    int j= n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k--]=nums1[i--];
        }
        else{
            nums1[k--]=nums2[j--];
        }
    }
}
int main(){
    int m,n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int nums1[m+n]; 
    printf("Enter the elements of the first array: ");
    for(int i=0;i<m;i++){
        scanf("%d", &nums1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter the elements of the second array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &nums2[i]);
    }
    merge(nums1, nums2, m, n);
    printf("Merged array: ");
    for(int i=0;i<m+n;i++){
        printf("%d ", nums1[i]);
    }
    return 0;
}