#include <stdio.h>
int strStr(char* haystack, char* needle) {
    if(needle[0]=='\0') return 0;
    for(int i=0;haystack[i]!='\0';i++){
        int j=0;
        while (needle[j]!='\0'&& haystack[i+j]==needle[j]){
            j++;
        }
        if(needle[j]=='\0'){
            return i;
        }
    }
    return -1;
}
int main(){
    char haystack[100], needle[100];
    printf("Enter the haystack string: ");
    scanf("%s", haystack);
    printf("Enter the needle string: ");
    scanf("%s", needle);
    int index = strStr(haystack, needle);
    if(index != -1){
        printf("The first occurrence of '%s' in '%s' is at index: %d\n", needle, haystack, index);
    } else {
        printf("The string '%s' was not found in '%s'.\n", needle, haystack);
    }
    return 0;
}
