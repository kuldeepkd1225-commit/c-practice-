#include <stdio.h>
char* LongestName(char* arr[],int n){
    char* ans = arr[0];
    for(int i=1;i<n;i++){
        if(strlen(arr[i])>strlen(ans)){
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char* arr[n];
    printf("Enter the names:\n");
    for(int i=0;i<n;i++){
        arr[i] = (char*)malloc(100*sizeof(char));
        scanf("%s", arr[i]);
    }
    char* longestName = LongestName(arr, n);
    printf("The longest name is: %s\n", longestName);
    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    return 0;
}
